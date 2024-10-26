SRCS =	ft_check.c ft_create.c ft_push.c ft_utils.c push_swap.c ft_other.c ft_instruction.c ft_tri.c ft_utils_tri.c
CC =	gcc -g #-Wall -Werror -Wextra
DIRLIB = ./libft
LIBFT = $(DIRLIB)/libft.a
INCLUDE = ./include
NAME =	push_swap
OBJS =	$(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME) 
	@echo "push_swap done !"

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