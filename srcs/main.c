/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:08:30 by averheij       #+#    #+#                */
/*   Updated: 2019/10/28 16:04:47 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

void	memcpy_test(const void *src, int n)
{
	int		i;
	void	*a;
	void	*b;

	printf("%s\n", src);
	a = (void*)malloc(n);
	printf("%s\n", ft_memcpy(a, src, n));
	b = (void*)malloc(n);
	printf("%s\n", memcpy(b, src, n));
}

void	memccpy_test(const void *src, int c, int n)
{
	int		i;
	void	*a;
	void	*b;

	printf("%s\n", src);
	a = (void*)malloc(n);
	printf("%s\n", ft_memccpy(a, src, c, n));
	printf("%s\n", a);
	b = (void*)malloc(n);
	printf("%s\n", memccpy(b, src, c, n));
	printf("%s\n", b);
}

int		main(void)
{
	memset_test(67, 5);
	bzero_test(5);
	memcpy_test("2tictacs", 9);
	memccpy_test("3ti4ctacs", '4', 9);
}
