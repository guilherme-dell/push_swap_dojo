# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 16:48:56 by acesar-l          #+#    #+#              #
#    Updated: 2022/09/03 00:51:57 by gnuncio-         ###   ########.fr        #
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
			@./$(NAME) 10 11 12 14 13

run2:
			@./$(NAME) 7 27 20 66 42 10 44 9 2 60 50 17 22 58 8 41 68 6 26 12 55 54 23 57 62 21 36 69 14 1 24 46 52 61 64 35 19 67 51 56 40 34 28 30 15 3 37 70 39 32 25 29 63 13 11 53 18 48 45 4 31 5 16 65 49 47 38 33 43 59

val:
			@valgrind --leak-check=full --show-leak-kinds=all --quiet --tool=memcheck --keep-debuginfo=yes ./$(NAME) 10 7 6 9 5

.PHONY:		all clean fclean re
