CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = do-op
INC = ./includes/
DIR = ./srcs/
HEADER = $(INC)ft_do_op.h
SRCS = $(DIR)main.c $(DIR)ft_operator.c $(DIR)ft_number.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

.c.o :
	$(CC) $(CFLAG) -c $< -I $(INC) -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(CC) $(CFLAG) $@ -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re: fclean all
