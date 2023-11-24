CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libprintf.a
LIBFT_DIR = libft
LIBFT = libft.a
CFILES = ft_puthex.c ft_printf.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_putaddress.c ft_putnbr_unsigned.c

# Add the missing source files that contribute to libft
LIBFT_SRCS = $(LIBFT_DIR)/ft_strlen.c

OFILES = $(CFILES:.c=.o) $(LIBFT_SRCS:.c=.o)

.PHONY: all bonus clean fclean

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(LIBFT_DIR)

clean: 
	rm -rf $(OFILES)
fclean: clean 
	rm -rf $(NAME)

re: fclean all
