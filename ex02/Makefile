# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 11:16:02 by mgeorges          #+#    #+#              #
#    Updated: 2025/05/07 13:28:00 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02

C++		=	c++

C++_FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp \
			ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
				
OBJS		=	$(SRCS:.cpp=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
		@echo "Compiling $(NAME)...$(C++_FLAGS)"
		@$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all