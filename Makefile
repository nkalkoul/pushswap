SRCS =	ft_check.c ft_create.c ft_push.c push_swap.c
CC =	cc -Wall -Werror -Wextra
DIRLIB = ./libft
LIBFT = $(DIRLIB)/libft.a
INCLUDE = ./include
NAME =	push_swap
OBJS =	$(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME) 
	@echo "push_swap done !"
#	cp $(LIBFT)/libft.a $(NAME)

EXEC : push_swap.c
	@$(CC) push_swap.c $(NAME) -g3

$(LIBFT) :
	@make -sC $(DIRLIB)

%.o : %.c
	@$(CC) -c $< -o $@
	@echo "compiling: $<"

clean :
	@make fclean -sC $(DIRLIB)
	@rm -f $(OBJS)


fclean : clean
	@rm -f $(NAME) a.out

re : fclean all