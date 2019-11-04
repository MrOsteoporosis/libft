/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:26:33 by averheij       #+#    #+#                */
/*   Updated: 2019/11/04 10:20:47 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static long int		ft_fatoi(const char *str, unsigned long int res, int sign)
{
	int		convi;

	convi = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (convi == 19 && sign == 1)
			return (-1);
		else if (convi == 19 && sign == -1)
			return (0);
		res = res * 10 + (*str - '0');
		str++;
		convi++;
	}
	return (res);
}

int					ft_atoi(const char *str)
{
	int					sign;
	unsigned long int	res;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	res = ft_fatoi(str, res, sign);
	return (sign * (int)res);
}
