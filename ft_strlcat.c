/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:47:59 by averheij       #+#    #+#                */
/*   Updated: 2019/11/27 13:41:49 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		s;
	int		d;

	d = 0;
	s = 0;
	while (dst[d] && (int)dstsize > d)
		d++;
	while (s < (int)dstsize - d - 1 && src[s] && (int)dstsize > d)
	{
		dst[d + s] = src[s];
		s++;
	}
	if ((int)dstsize > d)
		dst[d + s] = '\0';
	while (src[s])
		s++;
	if ((int)dstsize == d)
		return (s + dstsize);
	return (d + s);
}
