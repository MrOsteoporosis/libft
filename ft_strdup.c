/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:37:25 by averheij       #+#    #+#                */
/*   Updated: 2019/11/05 12:33:54 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		l;
	int		i;

	l = 0;
	while (src[l])
		l++;
	cpy = (char*)malloc(l + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < l)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
