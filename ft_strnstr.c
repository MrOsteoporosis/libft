/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:25:15 by averheij       #+#    #+#                */
/*   Updated: 2019/11/26 12:06:07 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		h;
	int		n;
	int		nlen;

	if (needle[0] == '\0')
		return ((char*)haystack);
	nlen = 0;
	while (needle[nlen])
		nlen++;
	h = 0;
	while (h + nlen < (int)len)
	{
		if (haystack[h] == needle[0])
		{
			n = 0;
			while (h + n < (int)len && haystack[h + n]
				&& needle[n] && haystack[h + n] == needle[n])
				n++;
			if (!needle[n])
				return ((char*)&haystack[h]);
		}
		h++;
	}
	return (NULL);
}
