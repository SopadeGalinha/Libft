/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:43:44 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 16:43:44 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocate (with malloc(3)) and returns a “fresh” string ending 
**  with ’\0’ representing the integer n given as argument.
**  Negative numbers must be supported. If the allocation fails,
**  the function returns NULL.
*/

#include "libft.h"

static void	ft_fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

static long int	get_size(long int n)
{
	long int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			offset;
	long int	len;

	offset = 0;
	len = get_size(n);
	res = malloc(sizeof(char) * len + 1);
	if (!(res))
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		offset++;
	}
	ft_fill_res(len, offset, n, res);
	res[len] = '\0';
	return (res);
}
