/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:42:29 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 16:42:29 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
#define _LIBFT_H

/*
** \________________________________HEADERS______________________________________/                                  
*/

#include<unistd.h>
#include<stdlib.h>
#include<string.h>

/*
\_______________________________FUNCTIONS______________________________________/                                  
*/

//MANDATORY

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int	    ft_isprint(int c);
int     ft_toupper(int c);
int	    ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strequ(char const *s1, char const *s2);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

size_t  ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void    ft_putnbr(int n);
void    ft_strclr(char *s);
void    ft_putchar(char c);
void    ft_strdel(char **as);
void    ft_memdel(void **ap);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    *ft_memalloc(size_t size);
void    ft_bzero(void *s, size_t n);
void    ft_putnbr_fd(int nb, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_calloc(size_t numb, size_t size);
void    ft_striter(char *s, void (*f)(char *));
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

char    *ft_itoa(int n);
char    *ft_strnew(size_t size);
char    *ft_strdup(const char *src);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strcpy(char *s1, const char *s2);
char    **ft_split(char const *s, char c);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const char *set);
char    *ft_strncat(char *dest, const char *src, size_t n);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

//BONUS STRUCT

typedef struct	s_list
{
	void			*content;
    size_t          content_size;
	struct s_list	*next;
}				t_list;

//BONUS

t_list	*ft_lstlast(t_list *lst);
t_list  *ft_lstnew(void *content);
t_list	ft_lstadd_front(t_list **head, t_list *new);

int		ft_lstsize(t_list *lst);

void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));

//EXTRAS
/*
int	    ft_islower(int c);
int		ft_isblank(int c);
int     ft_iscntrl(int c);
int	    ft_isgraph(int c);
int     ft_ispunct(int c);
int     ft_isspace(int c);
int     ft_isupper(int c);
int     ft_isxdigit(int c);
char	*ft_strrev(char *str);
void	ft_swap_int(int *a, int *b);
void	ft_swap_char(char *a, char *b);
*/
#endif