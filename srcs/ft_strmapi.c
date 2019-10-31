/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:13:22 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 10:19:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	while (s[i])
		i++;
	if (!(res = (char*)ft_calloc(i + 1, sizeof(char))))
		return (NULL);
	res[i] = '\0';
	i = 0;
	while (s[i])
	{
		res[i] = f((unsigned int)s[i], s[i]);
		i++;
	}
	return (res);
}
