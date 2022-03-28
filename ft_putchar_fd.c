/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puchar_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 10:13:50 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/25 10:13:50 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
**  42 PDF] Outputs the character ’c’ to the given file descriptor.
*/

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
