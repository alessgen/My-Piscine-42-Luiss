# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 09:40:37 by agenoves          #+#    #+#              #
#    Updated: 2021/10/21 10:29:34 by agenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
		srcs/ft_strcmp.c
INCS = includes
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
				ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
				${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re:				fclean all