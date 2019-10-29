/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:26:33 by averheij       #+#    #+#                */
/*   Updated: 2019/10/29 14:30:09 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		negative;

	negative = 0;
	res = 0;
	i = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
		if (str[i] == '+')
			return (0);
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	negative == -1 ? res = (res * -1) : i++;
	return (res);
}
