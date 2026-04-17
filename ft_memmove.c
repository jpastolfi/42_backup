/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:55:27 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/17 14:38:15 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	index = 0;
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (dest_ptr < src_ptr)
	{
		while (index < n)
		{
			dest_ptr[index] = src_ptr[index];
			index++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return ((void *)dest_ptr);
}

/* int main(void)
{
	char *dest = "Batata";
	char *src = "Tomate";
	printf("dest before: %s\n", dest);
	printf("src before: %s\n", src);
} */
