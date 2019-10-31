/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:09:02 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 16:18:56 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!(sub = (char*)ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
