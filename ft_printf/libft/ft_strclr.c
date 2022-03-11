/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:27:03 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/14 14:27:03 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  Sets every character of the string to the value ’\0’
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return ;
}
