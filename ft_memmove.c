/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:10:19 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 10:47:38 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		l;

	if (!dst && !src)
		return (dst);
	if ((long int)dst > (long int)src)
	{
		l = (int)len - 1;
		while (l >= 0)
		{
			*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
			l--;
		}
	}
	else
	{
		l = 0;
		while (l < (int)len)
		{
			*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
			l++;
		}
	}
	return (dst);
}
