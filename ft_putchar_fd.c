/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:57:40 by averheij       #+#    #+#                */
/*   Updated: 2019/11/01 12:59:24 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** even implementing putwchart from unit test i cant get unicode to print
** working implementations seem to use an int c instead of char c
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
