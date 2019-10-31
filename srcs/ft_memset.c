/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:54:03 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 11:16:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pps;
	int				l;

	l = len;
	pps = b;
	while (l)
	{
		*pps = (unsigned char)c;
		pps++;
		l--;
	}
	return (b);
}
