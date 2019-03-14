NAME = gnl

SRC = get_next_line.c \
	  main.c

INC = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "\033[32mmaking libft...\033[0m"
	@make -C libft fclean
	@make -C libft
	@make -C libft clean
	@echo "\033[32mmaking get_next_line...\033[0m"
	@$(CC) $(CFLAGS) $(SRC) -I libft -L libft -lft -o $(NAME)

.PHONY: clean
clean:
	@echo "\033[33mcleaning...\033[0m"
	@/bin/rm -f $(NAME)
	@make -C libft fclean

.PHONY: re
re: clean all
