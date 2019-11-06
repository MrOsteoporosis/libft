/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:09:02 by averheij       #+#    #+#                */
/*   Updated: 2019/11/06 14:37:05 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	sub = (char*)ft_calloc(sizeof(char), len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (i < start)
		return (ft_strdup(""));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
