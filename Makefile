# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 14:02:31 by tkurukay          #+#    #+#              #
#    Updated: 2024/03/24 14:02:32 by tkurukay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client
NAME_S = server
FLAGS = -Wall -Wextra -Werror
FILE1 = client.c
FILE2 = server.c
CC = cc

all: $(NAME_C) $(NAME_S)

$(NAME_C): $(FILE1)
	$(CC) $(FLAGS) $(FILE1) -o $(NAME_C)

$(NAME_S): $(FILE2)
	$(CC) $(FLAGS) $(FILE2) -o $(NAME_S)

clean:
	rm -f server
	rm -f client

fclean:
	rm -f $(NAME_C)
	rm -f $(NAME_S)

re: fclean all

.PHONY: all clean fclean re
