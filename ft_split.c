/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 12:48:50 by averheij       #+#    #+#                */
/*   Updated: 2019/11/07 12:28:05 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		*fallingwithstyle(char **res, int pos)
{
	while (pos >= 0)
	{
		if (res[pos])
			free(res[pos]);
		pos--;
	}
	free(res);
	return (NULL);
}

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
		res[pos] = (char*)malloc(sizeof(char) * (fe + 1));
		if (!res[pos])
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
	int		pos;
	char	**res;

	if (!str)
		return (NULL);
	pos = 0;
	i = 0;
	res = (char**)malloc(sizeof(char*) * (ft_wc(&c, (char*)str) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (str[i + 1] && (str[i] == c || i == 0) && str[i + 1] != c)
		{
			if (i != 0 || str[i] == c)
				i++;
			pos = ft_wordcopy(&c, res, &((char*)str)[i], pos);
			if (pos == -1)
				return (fallingwithstyle(res, pos));
		}
		i++;
	}
	res[pos] = 0;
	return (res);
}
