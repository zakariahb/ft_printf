 NAME = libftprintf.a

 SRC_F = ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c  
 OBJ_S = (SRC_F=.c:.o)

 CC = cc
FLAGS = -Wall -Wextra -Werror 
AR = ar rc
RM = rm -f



all : $(NAME)

 $(NAME) : $(OBJ_S)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean :
	$(RM) $(OBJ_S)

fclean : clean
	$(RM) $(NAME)


 re : fclean all


 


