CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
CFILES = ft_strlen.c ft_puthex.c ft_printf.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_putaddress.c ft_putnbr_unsigned.c


OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

clean: 
	rm -rf $(OFILES)

fclean: clean 
	rm -rf $(NAME)

.PHONY: all bonus clean fclean
re: fclean all
