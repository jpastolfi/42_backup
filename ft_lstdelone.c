/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:23:17 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/23 17:40:05 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	// free(lst);
}

void del(void *string)
{
	//printf("%s\n", (char *)string);
	(void)string;
}

int main(void)
{
	t_list *first = ft_lstnew("first");
	printf("%s\n", (char *)first->content);
	ft_lstdelone(first, &del);
	printf("%s\n", (char *)first->content);
}