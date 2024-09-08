SRCS =	ft_check.c
CC =	cc -Wall -Werror -Wextra
DIRLIB = ./libft
INCLUDE = ./include
NAME =	pswap.a
OBJS =	$(SRCS:.c=.o)

all : $(NAME) EXEC

$(NAME): $(OBJS)
	make -C $(DIRLIB)
	cp $(DIRLIB)/libft.a $(NAME)
	ar -rc $(NAME) $(OBJS)

EXEC : push_swap.c
	$(CC) push_swap.c $(NAME)

%.o : %.c
	$(CC) -c $(SRCS) 



clean :
	make fclean -C $(DIRLIB)
	rm -f $(OBJS)


fclean : clean
	rm -f $(NAME) a.out

re : fclean all