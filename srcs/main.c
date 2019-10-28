/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:08:30 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 14:39:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	memset_test(int c, int len)
{
	int		i;
	void	*a;
	void	*b;

	a = (void*)malloc(len);
	ft_memset(a, c, len);
	i = 0;
	while (i < len)
	{
		printf("%c", *(char*)(a + i));
		i++;
	}
	printf("\n");
	b = (void*)malloc(len);
	memset(b, c, len);
	i = 0;
	while (i < len)
	{
		printf("%c", *(char*)(b + i));
		i++;
	}
	printf("\n");
}

void	bzero_test(int n)
{
	int		i;
	void	*a;
	void	*b;

	a = (void*)malloc(n);
	memset(a, 68, n);
	i = 0;
	while (i < n)
	{
		printf("%c", *(char*)(a + i));
		i++;
	}
	printf("\n");
	ft_bzero(a, n);
	i = 0;
	while (i < n)
	{
		printf("%c", *(char*)(a + i));
		i++;
	}
	printf("\n");
	b = (void*)malloc(n);
	memset(b, 68, n);
	i = 0;
	while (i < n)
	{
		printf("%c", *(char*)(b + i));
		i++;
	}
	printf("\n");
	bzero(b, n);
	i = 0;
	while (i < n)
	{
		printf("%c", *(char*)(b + i));
		i++;
	}
	printf("\n");
}

int		main(void)
{
	memset_test(67, 5);
	bzero_test(5);
}
