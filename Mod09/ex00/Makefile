# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: r <marvin@42.fr>                           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 13:29:42 by r                 #+#    #+#              #
#    Updated: 2024/05/20 20:44:27 by r                ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= btc

SRC		= main.cpp BitcoinExchange.cpp

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 -g

OBJS	= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
