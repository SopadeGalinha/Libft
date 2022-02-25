# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 13:28:20 by jhgoncal          #+#    #+#              #
#    Updated: 2022/02/16 13:28:20 by jhgoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
HEADER = libft.h
CFLAGS := -Wall -Wextra -Werror -I.
RM = /bin/rm -f

M_SRCS = ft_atoi ft_bzero ft_calloc ft_isalnum \
ft_isalpha ft_isascii ft_isdigit ft_isprint \
ft_itoa ft_memccpy ft_memchr ft_memcmp \
ft_memcpy ft_memdel ft_memmalloc ft_memmove \
ft_memset ft_putchar ft_putchar_fd ft_putendl \
ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr \
ft_putstr_fd ft_strcat ft_strchr ft_strclr \
ft_strcmp ft_strcpy ft_strdel ft_strdup \
ft_strequ ft_striter ft_striteri ft_strjoin \
ft_strlcat ft_strlcpy ft_strlen ft_strmap \
ft_strmapi ft_strncat ft_strncmp ft_strncpy \
ft_strnequ ft_strnew ft_strnstr ft_strchr \
ft_split ft_strstr ft_substr ft_strtrim \
ft_tolower ft_toupper ft_islower ft_isupper \
ft_strrchr

M_OBJS =	$(M_SRCS:.c=.o)

B_SRCS = ft_lstadd ft_lstnew

B_OBJS = $(B_SRCS:.c=.o)


all:$(NAME)

$(NAME):	$(M_SRCS:=.o)
			ar -rcs $(NAME) $(M_SRCS:=.o)
clean:
	$(RM)	$(M_SRCS:=.o) $(B_SRCS:=.o)

fclean:		clean
			@$(RM) $(NAME)

re: fclean bonus all

bonus:	$(M_SRCS:=.o) $(B_SRCS:=.o)
		ar -rcs $(NAME) $(M_SRCS:=.o) $(B_SRCS:=.o)
