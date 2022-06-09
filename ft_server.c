/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:52:49 by youngmki          #+#    #+#             */
/*   Updated: 2021/11/19 17:33:06 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static	void	ft_sighandle(int sig, siginfo_t *siginfo, void *t)
{
	static int							i = 0;
	static pid_t						client_pid = 0;
	static unsigned char				c = 0;

	t = (void *)t;
	if (!client_pid)
		client_pid = siginfo->si_pid;
	c |= (sig == SIGUSR1);
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(client_pid, SIGUSR1);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		kill(client_pid, SIGUSR2);
	}
	else
		c <<= 1;
}

int	main(int argc,	char **argv)
{
	struct sigaction	s_sigaction;

	argc = (int)argc;
	argv = (char **)argv;
	ft_putstr_fd("Server PID:	", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s_sigaction.sa_sigaction = ft_sighandle;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}
