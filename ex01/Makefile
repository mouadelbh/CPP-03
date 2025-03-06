# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 05:14:14 by mel-bouh          #+#    #+#              #
#    Updated: 2025/03/06 15:18:32 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = ClapTrap.hpp ScavTrap.hpp
NAME = ScavTrap

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC) $(HEADER)
	c++ $(FLAGS) -c $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
