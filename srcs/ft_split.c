/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 12:48:50 by averheij       #+#    #+#                */
/*   Updated: 2019/10/30 12:15:45 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_ischarset(char str, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

static int		ft_wordlength(char *charset, char *str)
{
	int i;

	i = 0;
	while (!ft_ischarset(str[i], charset) && str[i] != '\0')
		i++;
	return (i);
}

static int		ft_wordcount(char *charset, char *str)
{
	int		i;
	int		fs;
	int		fe;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_ischarset(str[i], charset) || i == 0)
		{
			fs = i;
			if (i != 0 || ft_ischarset(str[i], charset))
				fs++;
			fe = ft_wordlength(charset, &str[fs]);
			if (fe > 0)
				count++;
		}
		i++;
	}
	return (count);
}

static int		ft_wordcopy(char *charset, char **res, char *str, int pos)
{
	int		fe;
	char	*ptr;
	int		i;

	fe = ft_wordlength(charset, str);
	if (fe > 0)
	{
		res[pos] = (char*)malloc(sizeof(char) * (fe + 1));
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

char			**ft_split(const char *s, char c)
{
	int		i;
	int		fs;
	int		pos;
	char	**res;

	pos = 0;
	i = 0;

	if (!(res = (char**)malloc(sizeof(char*) * (ft_wordcount(&c, (char*)s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (ft_ischarset(s[i], &c) || i == 0)
		{
			fs = i;
			if (i != 0 || ft_ischarset(s[i], &c))
				fs++;
			pos = ft_wordcopy(&c, res, &((char*)s)[fs], pos);
		}
		i++;
	}
	res[pos] = 0;
	return (res);
}
