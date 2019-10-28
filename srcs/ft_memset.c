/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:54:03 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 13:48:00 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*pps;

	pps = b;
	while (len)
	{
		*pps = (unsigned char)c;
		pps++;
		len--;
	}
	return (b);
}
