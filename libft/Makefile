NAME = libft.a
SRC = sources/*.c
OBJ = *.o
INC = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "\033[32mmaking libft...\033[0m"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@echo "\033[33mcleaning libft repository...\033[0m"
	@/bin/rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@echo "\033[33mremoving libft library file...\033[0m"
	@/bin/rm -f $(NAME)

.PHONY: re
re: fclean all
