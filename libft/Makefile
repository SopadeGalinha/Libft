# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 14:12:38 by jhgoncal          #+#    #+#              #
#    Updated: 2022/02/26 14:12:38 by jhgoncal         ###   ########.fr	       #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ${wildcard ft_*.c}
BONUS	= ${wildcard ft_lst*.c}

SRCS_O	= ${SRCS:.c=.o}
BONUS_O	= ${BONUS:.c=.o}
OBJS	= ${SRCS_O} ${BONUS_O}

CC		= gcc
RM		= /bin/rm -f
CFLAGS	= -Wall -Wextra -Werror -I ${INC}

INC	= ./
RLIB	= ar -rc
RS = ar -s

${NAME}: ${OBJS}
	${RLIB} ${NAME} ${OBJS}
	${RS} ${NAME}


all: ${NAME}

bonus:	${BONUS_O}
		${RLIB} ${NAME} ${BONUS_O}
		${RS} ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c *.h
	norminette -R CheckDefine *.h

.PHONY: clean fclean all re bonus