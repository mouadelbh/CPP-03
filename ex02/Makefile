# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 05:14:14 by mel-bouh          #+#    #+#              #
#    Updated: 2024/12/20 06:34:05 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp FragTrap.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
NAME = FragTrap

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ $(FLAGS) -c $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
