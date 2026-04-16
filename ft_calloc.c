/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:26:51 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 19:23:14 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;
	size_t index;

	if (nmemb * size > INT_MAX || nmemb == 0 || size == 0)
		return (NULL);
	ptr = (unsigned char *)malloc(nmemb * size);
	index = 0;
	while (index < nmemb * size)
	{
		ptr[index] = 0;
		index++;
	}
	return ((void *)ptr);
}

/* int main(void)
{
	int i = 0;

	char *ptr = ft_calloc(3, 4);
	while (i < 12)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
} */