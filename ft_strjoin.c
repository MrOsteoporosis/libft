/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:29:29 by averheij       #+#    #+#                */
/*   Updated: 2019/11/05 11:38:42 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		l1;
	int		l2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (!(res = (char*)ft_calloc(sizeof(char), l1 + l2)))
		return (NULL);
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l2)
	{
		res[i + l1] = s2[i];
		i++;
	}
	return (res);
}
