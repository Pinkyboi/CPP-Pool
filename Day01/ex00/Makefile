# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 15:14:18 by abenaiss          #+#    #+#              #
#    Updated: 2021/09/25 15:14:34 by abenaiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CXX = clang++

CFILES =main.cpp\
		Pony.cpp

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