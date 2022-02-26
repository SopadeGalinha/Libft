# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 14:12:38 by jhgoncal          #+#    #+#              #
#    Updated: 2022/02/26 14:12:38 by jhgoncal         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard src/ft_*.c}
BONUS	= ${wildcard bonus/ft_*.c}
SRCS_O	= ${SRCS:.c=.o}
BONUS_O	= ${BONUS:.c=.o}
OBJS	= $(SRCS_O) $(BONUS_O)
INS	= includes
NAME	= libft.a
LIB	= ar rc
RL	= ranlib
CC		= gcc
RM		= /bin/rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INS}

${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}
	${RL} ${NAME}


all: ${NAME}

bonus:	$(BONUS_O)
		$(LIB) $(NAME) $(BONUS_O)
		$(RL) $(NAME)

clean:
	${RM} ${OBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader *.c

.PHONY: all re clean fclean