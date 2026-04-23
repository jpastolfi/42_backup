/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:23:23 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/22 12:23:24 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
  while (lst->next)
  {
    lst = lst->next;
  }
  return (lst);
}

int main(void)
{
  t_list *first = ft_lstnew("first");
  t_list *second = ft_lstnew("second");
  t_list *third = ft_lstnew("third");
  t_list *fourth = ft_lstnew("fourth");
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = NULL;
  printf("first->content: %s\n", (char *)first->content);
  printf("first->next: %p\n", first->next);
  printf("second address: %p\n", second);
  printf("second->content: %s\n", (char *)second->content);
  printf("second->next: %p\n", second->next);
  printf("third address: %p\n", third);
  printf("third->content: %s\n", (char *)third->content);
  printf("third->next: %p\n", third->next);
  printf("fourth address: %p\n", fourth);
  printf("fourth->content: %s\n", (char *)fourth->content);
  printf("fourth->next: %p\n", fourth->next);
  printf("Last item's content: %s\n", (char *)ft_lstlast(first)->content);
}
