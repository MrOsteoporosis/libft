/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:45:14 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 16:16:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		pos1;
	char	*res;

	i = 0;
	while (s1[i] && s1[i] == *set)
		i++;
	pos1 = i;
	while (s1[i])
		i++;
	i--;
	while (s1[i] && s1[i] == *set)
		i--;
	i++;
	if (!(res = (char*)ft_calloc(sizeof(char), i - pos1 + 1)))
		return (NULL);
	ft_strlcpy(res, &s1[pos1], i - pos1 + 1);
	return (res);
}
