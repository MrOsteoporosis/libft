/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:38:29 by averheij       #+#    #+#                */
/*   Updated: 2019/10/29 10:47:05 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		l;
	void	*ptr;

	l = 0;
	while (l < n)
	{
		*(unsigned char*)(dst + l) = *(unsigned char*)(src + l);
		if (*(unsigned char*)(src + l) == (unsigned char)c)
		{
			ptr = (dst + l + 1);
			break ;
		}
		l++;
	}
	return (ptr);
}
