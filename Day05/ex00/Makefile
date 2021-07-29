# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 21:34:43 by abenaiss          #+#    #+#              #
#    Updated: 2021/07/29 02:40:03 by abenaiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = ex00

OBJ_DIR = ./obj/
SRC_DIR = ./

CFILES = main.cpp\
		Bureaucrat.cpp\
		
OFILES = $(addprefix $(OBJ_DIR), $(CFILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OFILES)
	@echo "Compiling $(NAME)..."
	@$(CC) $(OFILES) -o $(NAME)
	@echo "Compilation done."
$(OFILES) : $(OBJ_DIR)%.o : $(SRC_DIR)%.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)
clean:
	@echo "Cleaning $(NAME)..."
	@rm -rf $(OBJ_DIR)
	@echo "Done."
fclean: clean
	@rm -rf $(NAME)
re: fclean all