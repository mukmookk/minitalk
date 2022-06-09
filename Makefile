SERVER = ft_server
CLIENT = ft_client
CC	= gcc
FLAGS = -Wall -Wextra -Werror
LIBS = -Llibft -lft
LIBFT = libft.a

all		: $(LIBFT) $(SERVER) $(CLIENT)

$(LIBFT):
	make -C libft

$(SERVER):
	$(CC) $(FLAGS) -o $(SERVER) $(SERVER).c $(LIBS) 

# $(CLIENT): ft_client.o clean libft
# 	gcc $(FLAGS) -o test_c ft_client.c -Llibft -lft

re 		: fclean all

clean	:
	rm -f *.o

fclean	:	clean
	rm -f *.o *.ft_client ft_server


debug	:	ft_client.o clean libft
	gcc -g -o test_c ft_client.c -Llibft -lft
	gcc -g -o test_s ft_server.c -Llibft -lft

$(CLIENT)	:	clean libft
	gcc $(FLAGS) -o client ft_client.c -Llibft -lft
	gcc -o server ft_server.c -Llibft -lft
	## ./test_s
	# ./test_c

show	:	test
	./test

.PHONY: test clean fclean debug show 
