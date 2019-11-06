/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:29:29 by averheij       #+#    #+#                */
/*   Updated: 2019/11/06 12:00:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fstrjoin(char *res, char const *s2, int l1, int l2)
{
	int		i;

	i = 0;
	while (i < l2)
	{
		res[i + l1] = s2[i];
		i++;
	}
	return (res);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		l1;
	int		l2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char*)ft_calloc(sizeof(char), l1 + l2 + 1);
	if (!res)
		return (NULL);
	res[l1 + l2] = '\0';
	i = 0;
	while (i < l1)
	{
		res[i] = s1[i];
		i++;
	}
	return (ft_fstrjoin(res, s2, l1, l2));
}
