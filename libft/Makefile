# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 04:32:29 by youngmki          #+#    #+#              #
#    Updated: 2021/11/19 16:24:59 by youngmki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_pow_bonus \
		ft_strndup_bonus \


FILES_B = 	ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
all: status_1 $(NAME)
	@echo "\033[1;31m    ## SUCESSFULLY CREATE \"$(NAME)\"\033[m"

$(NAME): $(OBJS)
	@echo "\033[1;31m    ## COMPLETE .c to .o\\033[m"
	@echo "\033[1;31m    ## SUCCESSFULLY ARCIVED\\033[m"
	@$(AR) $@ $^
			
bonus: $(OBJS_B)
	@$(AR) $(NAME) $^
	@echo "\033[1;31m    ## SUCCESSFULLY ARCIVED\\033[m"
	@echo "\033[1;31m    ## COMPLETE bonus\\033[m"

clean:
	@$(RM) $(OBJS) $(OBJS_B)
	@echo "\033[1;31m    ## COMPLETE clean\\033[m"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) *.out
	@echo "\033[1;31m    ## COMPLETE fclean\\033[m"

re: clean all

status_1:
	@echo "\033[1;31m    ## CONVERTING .c to .o ...\\033[m"

.PHONY: bonus all clean fclean re 
