/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 11:57:22 by averheij       #+#    #+#                */
/*   Updated: 2019/11/04 12:03:12 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*freeme;
	t_list	*next;

	freeme = *lst;
	while (freeme)
	{
		next = freeme->next;
		del(freeme->content);
		free(freeme);
		freeme = next;
	}
	*lst = NULL;
}
