# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 15:28:23 by abenaiss          #+#    #+#              #
#    Updated: 2021/09/25 15:29:02 by abenaiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex06
CXX = clang++

CFILES =main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

OBJ_DIR = ./obj/
OFILES =  $(addprefix $(OBJ_DIR), $(CFILES:.cpp=.o))

all : $(NAME)
	
$(NAME) : $(OFILES)
	@$(CXX) $^ -o $@
$(OFILES) : $(OBJ_DIR)%.o : %.cpp | $(OBJ_DIR)
	@$(CXX) -c $< -o $@
$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -rf $(NAME)
re: fclean all