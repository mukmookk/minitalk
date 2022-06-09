/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:52:46 by youngmki          #+#    #+#             */
/*   Updated: 2021/11/19 17:55:35 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft/libft.h"

void	ft_sighandle(int sig, siginfo_t *siginfo, void *t)
{
	static int	received;
	siginfo_t	*s_siginfo;
	
	s_siginfo = NULL;
	siginfo = s_siginfo;
	t = (void *)t;
	if (sig == SIGUSR2)
		received++;
	else
	{
		ft_putnbr_fd(received, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}		
}

void	ft_init(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	s_sigaction;

	argc = (int)argc;
	if (argc != 3 || ft_atoi(argv[1]) < 0)
	{
		ft_putstr_fd("There is problem with procesiing parameters\n", 1);
		return (1);
	}
	ft_putstr_fd("Sent			:", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putstr_fd("\nReceived		:", 1);
	s_sigaction.sa_sigaction = ft_sighandle;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	ft_init(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
