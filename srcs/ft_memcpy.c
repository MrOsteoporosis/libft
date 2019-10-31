/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:04:58 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 10:38:01 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		l;

	l = n;
	if (!dst && !src)
		return (dst);
	while (l)
	{
		l--;
		*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
	}
	return (dst);
}
