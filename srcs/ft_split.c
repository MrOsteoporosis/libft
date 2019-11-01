/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 12:48:50 by averheij       #+#    #+#                */
/*   Updated: 2019/11/01 14:29:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_wordlength(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

static int		ft_wc(char *c, char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i + 1] && (str[i] == *c || i == 0) && str[i + 1] != *c)
			count++;
		i++;
	}
	return (count);
}

static int		ft_wordcopy(char *c, char **res, char *str, int pos)
{
	int		fe;
	char	*ptr;
	int		i;

	if (*str != *c)
	{
		fe = ft_wordlength(*c, str);
		if (!(res[pos] = (char*)malloc(sizeof(char) * (fe + 1))))
			return (-1);
		ptr = res[pos];
		i = 0;
		while (i < fe)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
		pos++;
	}
	return (pos);
}

char			**ft_split(const char *str, char c)
{
	int		i;
	int		fs;
	int		pos;
	char	**res;

	pos = 0;
	i = 0;
	if (!(res = (char**)malloc(sizeof(char*) * (ft_wc(&c, (char*)str) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i + 1] && (str[i] == c || i == 0) && str[i + 1] != c)
		{
			fs = i;
			if (i != 0 || str[i] == c)
				fs++;
			pos = ft_wordcopy(&c, res, &((char*)str)[fs], pos);
			if (pos == -1)
				return (NULL);
		}
		i++;
	}
	res[pos] = 0;
	return (res);
}
