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
OBJS	= $(SRCS_O) $(BONUS_O)

CC		= gcc
RM		= /bin/rm -f
CFLAGS	= -Wall -Wextra -Werror -I $(INC)

INC	= ./
LIB	= ar -rcs
RL	= ranlib

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

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

.PHONY: clean fclean all re bonus