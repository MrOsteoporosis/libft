/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:52:43 by averheij       #+#    #+#                */
/*   Updated: 2019/10/30 13:05:47 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_itoa(int nb)
{
	char	*str;
	int		size;
	int		temp;

	temp = nb;
	size = 0;
	while (temp)
	{
		temp = temp / 10;
		size++;
	}
	(nb < 0) ? temp++ : size--;
	if (!(str = (char*)ft_calloc(sizeof(char), size + 1)))
		return (NULL);
	str[size] = '\0';
	temp = nb;
	while (size >= ((nb < 0) ? 1 : 0))
	{
		str[size] = ((temp < 0) ? '0' - temp % 10 : '0' + temp % 10);
		temp = temp / 10;
		size--;
	}
	(nb < 0) ? str[0] = '-' : temp++;
	return (str);
}
