/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:28:30 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 16:40:00 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int		l;
	void	*ptr;

	l = 0;
	while (l < n)
	{
		if (*(unsigned char*)(s + l) == (unsigned char)c)
		{
			ptr = (s + l);
			break ;
		}
		l++;
	}
	return (ptr);
}
