# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 16:48:56 by acesar-l          #+#    #+#              #
#    Updated: 2022/09/02 02:19:26 by gnuncio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

GREEN		= \033[0;32m
GREY		= \033[0;90m
RESET		= \033[0m

LIBFT_PATH	= ./libraries/Libft
LIBFT		= ./libraries/Libft/libft.a

SRCS_PATH	= ./sources

CC 			= gcc -g3

FLAGS 		=

REMOVE 		= rm -f

INCLUDES = -I ./includes/

SRCS 		= $(SRCS_PATH)/*.c

all:		$(NAME)

$(NAME): 	$(LIBFT)
			@$(CC) $(INCLUDES) -o $(NAME) $(SRCS) $(FLAGS) $(LIBFT)
			@echo "$(GREY)$(NAME): $(GREEN)$(NAME) was created$(RESET)"

${LIBFT}:
			@make bonus -C $(LIBFT_PATH)

clean:
			@${REMOVE} ${NAME}
			@echo "$(GREY)$(NAME): $(NAME) was deleted$(RESET)"


fclean:
			make fclean -C $(LIBFT_PATH)
			@$(REMOVE) $(NAME)
			@echo "$(GREY)$(NAME): $(NAME) was deleted$(RESET)"

re:			clean $(NAME)

run:
			@./$(NAME) 10 3 20 50 7 12

val:
			@valgrind --leak-check=full --show-leak-kinds=all --quiet --tool=memcheck --keep-debuginfo=yes ./$(NAME) 10 7 6 9 5

.PHONY:		all clean fclean re
