NAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
FILES	= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ	= $(FILES:%.c=%.o)

BSRC	= $(shell find . -type f -name "ft_lst*.c")
B_OBJ	= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

bonus: $(OBJ) $(B_OBJ)
	ar -r $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re