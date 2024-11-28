NAME = libftprintf.a

SRC_F = ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c  ft_printf.c ft_chek_form.c

OBJ_S = $(SRC_F:.c=.o)
HEADER = ft_printf.h
CC = cc
FLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = rm -f



all : $(NAME)

$(NAME) : $(OBJ_S)
	$(AR) $(NAME) $<

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_S)

fclean : clean
	$(RM) $(NAME)

re : fclean all