/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:00:48 by averheij       #+#    #+#                */
/*   Updated: 2019/11/05 11:42:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	endl;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	endl = '\n';
	write(fd, &endl, 1);
}
