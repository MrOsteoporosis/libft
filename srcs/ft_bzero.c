/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:18:12 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 14:20:29 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	unsigned char	*pps;

	pps = s;
	while (n)
	{
		*pps = 0;
		pps++;
		n--;
	}
}
