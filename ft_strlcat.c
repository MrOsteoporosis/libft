/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:47:59 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 13:30:33 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (j < (int)dstsize - i - 1 && src[j] && (int)dstsize > i)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j])
		j++;
	if ((int)dstsize < i)
		return (j + dstsize);
	return (i + j);
}
