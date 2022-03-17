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

SRCS	= ${wildcard ft_s*.c && ft_t*.c && ft_p*.c}\
	      ${wildcard ft_m*.c && ft_i*.c && ft_a*.c && ft_b*.c && ft_c*.c}
BONUS	= ${wildcard ft_lst*.c}

SRCS_O	= ${SRCS:.c=.o}
BONUS_O	= ${BONUS:.c=.o}
OBJS	= ${SRCS_O} ${BONUS_O}

CC		= gcc
RM		= /bin/rm -f
CFLAGS	= -Wall -Wextra -Werror -I ${INC}

INC	= ./
CL = ar -rc
RL = ar -s

${NAME}: ${SRCS_O}
	${CL} ${NAME} ${SRCS_O}
	${RL} ${NAME}

all: ${NAME}

bonus:	${BONUS_O}
		${CL} ${NAME} ${BONUS_O}
		${RL} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c

.PHONY: clean fclean all re bonus