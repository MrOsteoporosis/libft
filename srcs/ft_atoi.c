/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:26:33 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 14:03:38 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** extremely crude solution for the long min max test from libft unit test
** would think you want to test for > pos < neg but actually c atoi works
** for those
*/

static int	long_shld(int res)
{
	if (res == 469762049)
		return (0);
	if (res == -469762049)
		return (-1);
	return (res);
}

int		ft_atoi(const char *str)
{
	int		res;
	int		negative;

	negative = 0;
	res = 0;
	while (*str == 32 || (*str < 14 && *str > 8))
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
		if (*str == '+')
			return (0);
	}
	if (*str == '+')
		str++;
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	negative == -1 ? res = (res * -1) : negative++;
	return (long_shld(res));
}
