/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:10:19 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 16:17:55 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		l;

	l = len;
	while (l)
	{
		l--;
		*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
	}
	return (dst);
}
