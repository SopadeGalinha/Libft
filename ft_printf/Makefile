# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:07:29 by jhgoncal          #+#    #+#              #
#    Updated: 2022/03/10 16:07:29 by jhgoncal         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = $(wildcard ft*.c)
LIBFT = $(wildcard libft/ft*.c)
OBJS = $(SRCS:.c=.o)
LIBFTOBJS = $(LIBFT:.c=.o)

CC = gcc
RM = /bin/rm -f
CFLAGS = -Wall -Wextra -Werror -I $(INC)
INC = ./
RL = ranlib
LIB = ar -rcs

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: runlibft ${OBJS} 
	${LIB} ${NAME} ${OBJS} ${LIBFTOBJS}
	${RL} ${NAME}

runlibft: 
	make -C libft

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader *.c

.PHONY: clean fclean all re
