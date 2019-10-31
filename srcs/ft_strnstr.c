/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:25:15 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 13:34:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		h;
	int		n;

	if (needle[0] == '\0')
		return ((char*)haystack);
	h = 0;
	while (h < (int)len)
	{
		if (haystack[h] == needle[0])
		{
			n = 0;
			while (haystack[h + n] && needle[n] && haystack[h + n] == needle[n])
			{
				n++;
			}
			if (h + n > (int)len)
				break ;
			if (!needle[n])
				return ((char*)&haystack[h]);
		}
		h++;
	}
	return (NULL);
}
