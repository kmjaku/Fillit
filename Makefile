# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmjaku <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/10 15:01:35 by kmjaku            #+#    #+#              #
#    Updated: 2016/07/10 15:01:37 by kmjaku           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC_DIR = ./srcs/
RM = rm -f
CC = gcc -Wall -Werror -Wextra -I ./include
SRC = main.c \
	   ft_resolve.c \
	   ft_creat_map.c \
	   fonct.c \
	   ft_push_left.c \
	   map_check.c
VPATH = $(SRC_DIR)
OBJ = $(addprefix $(O_DIR)/,$(SRC:.c=.o))
O_DIR = ./objs

$(NAME): $(OBJ)
	@echo "Making library."
	make -C libft/
	@echo "Library made."
	@echo "Making exe."
	@gcc -o $(NAME) -Werror -Wextra -Wall -I includes/ $(OBJ) -L libft/ -lft

$(O_DIR)/%.o: %.c
	@mkdir -p $(O_DIR)
	@gcc -Wall -Werror -Wextra -ferror-limit=2 -I includes -o $@ -c $<	

all: $(NAME)

clean:
	@echo "Removing objets."
	@rm -rf ./objs
	@make clean -C libft/ 
	@echo "Clean done."


fclean: clean
	@echo "Removing exe."
	$(RM) $(NAME)
	@make fclean -C libft/ 
	@echo "Fclean done."

re: fclean all
