/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:10:19 by averheij       #+#    #+#                */
/*   Updated: 2019/10/29 15:56:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		l;

	l = 0;
	while (l < (int)len)
	{
		*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
		l++;
	}
	return (dst);
}
