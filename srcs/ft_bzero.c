/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:18:12 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 15:10:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pps;
	int				l;

	l = n;
	pps = s;
	while (l)
	{
		*pps = 0;
		pps++;
		l--;
	}
}
