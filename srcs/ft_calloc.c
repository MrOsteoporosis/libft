/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:32:45 by averheij       #+#    #+#                */
/*   Updated: 2019/10/31 15:23:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void		*block;

	if (!(block = (void*)malloc(count * size)))
		return (NULL);
	ft_bzero(block, count * size);
	return (block);
}
