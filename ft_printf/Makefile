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

LIBFT = $(wildcard libft/ft*.c)
LIBFTOBJS = $(LIBFT:.c=.o)

SRCS = $(wildcard ft*.c)
OBJS = $(SRCS:.c=.o)

INC = ./

CC = gcc
RM = /bin/rm -f
CFLAGS = -Wall -Wextra -Werror -I $(INC)

RLIB = ar -rcs

${NAME}: r_libft ${OBJS} 
	${RLIB} ${NAME} ${OBJS} ${LIBFTOBJS}
	${RLIB} ${NAME}

r_libft: 
	make -C libft

all: ${NAME}

clean:
	${RM} ${OBJS} $(LIBFTOBJS)

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c

.PHONY: clean fclean all re
