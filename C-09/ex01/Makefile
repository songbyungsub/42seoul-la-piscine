# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bysong <bysong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 10:03:37 by bysong            #+#    #+#              #
#    Updated: 2022/02/24 16:37:53 by bysong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INCS	= includes
CFLAG	= -Wall -Wextra -Werror
SRCS 	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
all : $(NAME)

%.o: %.c
	gcc ${CFLAG} -c $< -o $@ -I ${INCS}

$(NAME) : $(OBJS)
	ar rc $@ $(OBJS)
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}

re: fclean all
