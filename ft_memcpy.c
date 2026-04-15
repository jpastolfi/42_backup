/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:25:50 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 14:25:55 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
	{
		return (NULL);
	}
	index = 0;
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (index < n)
	{
		dest_ptr[index] = src_ptr[index];
		index++;
	}
	return (dest);
}

/* int main(void)
{
	unsigned char first[10] = {"Batata"};
	unsigned char second[10] = {"Camelo"};
	printf("first before: %s\n", first);
	printf("second before: %s\n", second);
	ft_memcpy(&first, &second, 6);
	printf("first after: %s\n", first);
	printf("second after: %s\n", second);
} */