/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:08:30 by averheij       #+#    #+#                */
/*   Updated: 2019/10/29 12:42:22 by averheij      ########   odam.nl         */
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

	printf("memset\nIN: %d %c\n", len, c);
	a = (void*)malloc(len);
	ft_memset(a, c, len);
	printf("FT: %s\n", a);
	b = (void*)malloc(len);
	memset(b, c, len);
	printf("CC: %s\n", b);
}

void	bzero_test(int n)
{
	int		i;
	void	*a;
	void	*b;

	a = (void*)malloc(n);
	memset(a, 68, n);
	printf("bzero\nIN: %s\n", a);
	ft_bzero(a, n);
	printf("FT: %s\n", a);
	b = (void*)malloc(n);
	memset(b, 68, n);
	bzero(b, n);
	printf("CC: %s\n", b);
}

void	memcpy_test(const void *src, int n)
{
	int		i;
	void	*a;
	void	*b;

	printf("memcpy\nIN: %s\n", src);
	a = (void*)malloc(n);
	printf("FT: %s\n", ft_memcpy(a, src, n));
	b = (void*)malloc(n);
	printf("CC: %s\n", memcpy(b, src, n));
}

void	memccpy_test(const void *src, int c, int n)
{
	int		i;
	void	*a;
	void	*b;
	void	*temp;

	printf("memccpy\nIN: %s %c\n", src, (char)c);
	a = (void*)malloc(n);
	if ((temp = ft_memccpy(a, src, c, n)))
	{
		printf("FT: %c\n", *(char*)(temp - 1));
	}
	else
	{
		printf("FT: NULL\n");
	}
	printf("FT: %s\n", a);
	b = (void*)malloc(n);
	if ((temp = memccpy(b, src, c, n)))
	{
		printf("CC: %c\n", *(char*)(temp - 1));
	}
	else
	{
		printf("CC: NULL\n");
	}
	printf("CC: %s\n", b);
}

void	memmove_test_string(const void *src, int n)
{
	int		i;
	void	*a;
	void	*b;

	printf("memmove\nIN: %s\n", src);
	a = (void*)malloc(n);
	printf("FT: %s\n", ft_memmove(a, src, n));
	b = (void*)malloc(n);
	printf("CC: %s\n", memmove(b, src, n));
}

void	memmove_test_array(void)
{
	int		arr1[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int		arr2[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int		*a1;
	int		*a2;
	int		i;

	printf("memmove\nIN: ");
	i = 0;
	while (i < 8)
	{
		printf("%d", arr1[i]);
		if (i < 7)
			printf(", ");
		i++;
	}
	printf("\n");
	a1 = &arr1[0];
	a2 = &arr1[1];
	ft_memmove(a1, a2, 7);
	printf("FT: ");
	i = 0;
	while (i < 8)
	{
		printf("%d", arr1[i]);
		if (i < 7)
			printf(", ");
		i++;
	}
	printf("\n");

	a1 = &arr2[0];
	a2 = &arr2[1];
	memmove(a1, a2, 7);
	printf("CC: ");
	i = 0;
	while (i < 8)
	{
		printf("%d", arr2[i]);
		if (i < 7)
			printf(", ");
		i++;
	}
	printf("\n");
}

void	memchr_test(const void *src, int c, int n)
{
	int		i;
	void	*a;
	void	*b;

	printf("memchr\nIN: %s\n", src);
	a = (void*)malloc(n);
	printf("FT: %s\n", ft_memchr(src, c, n));
	printf("CC: %s\n", memchr(src, c, n));
}

void	memcmp_test(const void *s1, const void *s2, int n)
{
	printf("memcmp\nIN: %s %s\n", s1, s2);
	printf("FT: %d\n", ft_memcmp(s1, s2, n));
	printf("CC: %d\n", memcmp(s1, s2, n));
}

void	strlen_test(const char *s)
{
	printf("strlen\nIN: %s\n", s);
	printf("FT: %zu\n", ft_strlen(s));
	printf("CC: %lu\n", strlen(s));
}

void	strlcpy_test(const char *s)
{
	char	*a;
	char	*b;
	int		size = 6;

	printf("strlcpy\nIN: %s\n", s);
	a = (char*)malloc(size);
	printf("FT: %zu %s\n", ft_strlcpy(a, s, size), a);
	b = (char*)malloc(size);
	printf("CC: %lu %s\n", strlcpy(b, s, size), b);
}

int		main(void)
{
	memset_test(67, 5);
	memset_test(67, 0);
	memset_test(500, 0);
	bzero_test(5);
	bzero_test(0);
	memcpy_test("2tictacs", 8);
	memcpy_test("", 0);
	memccpy_test("3tictacs", 'c', 8);
	memccpy_test("3tictacs", '4', 8);
	memccpy_test("", ' ', 0);
	memmove_test_string("4tictacs", 8);
	memmove_test_string("", 0);
	memmove_test_array();
	memchr_test("5tictacs", 'c', 8);
	memcmp_test("hello", "hello", 5);
	memcmp_test("hello", "hellO", 5);
	memcmp_test("", "", 0);
	strlen_test("6tictacs");
	strlen_test("");
	strlcpy_test("tic");
	strlcpy_test("tictac");
}
