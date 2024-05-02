# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: r <marvin@42.fr>                           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 13:29:42 by r                 #+#    #+#              #
#    Updated: 2024/04/29 13:50:20 by gpouzet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Office

SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp\

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

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
