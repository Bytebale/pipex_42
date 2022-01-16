NAME = pipex

LIB_PATH = ./libft/

LIB = -L ./libft -lft

SRCS = pipex.c\
		utils.c\

CC = gcc

OBJS = $(SRCS:.c=.o)

HEADER = pipex.h

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(HEADER) $(OBJS) $(SRCS)
		make -C $(LIB_PATH)
		$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $@

clean: 
	@rm -f *.out
	@rm -f *.o
	@rm -f $(OBJS)
	make clean -C $(LIB_PATH)

fclean:	clean
	@rm -f $(NAME)
	make fclean -C $(LIB_PATH)

re: fclean all

.PHONY: all clean fclean re bonus