/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:55:27 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:40:47 by jastolfi         ###   ########.fr       */
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
	unsigned char	temp[n];

	index = 0;
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (index < n)
	{
		temp[index] = src_ptr[index];
		index++;
	}
	temp[index] = '\0';
	index = 0;
	while (index < n)
	{
		dest_ptr[index] = temp[index];
		index++;
	}
	return (dest);
}

/* int main(void)
{
	char dest[] = "Batata";
	char src[] = "Tomate";
	printf("dest before: %s\n", dest);
	printf("src before: %s\n", src);
	ft_memmove(&dest, &src, 2);
	printf("dest after: %s\n", dest);
	printf("src after: %s\n", src);

	char arr[] = "ABCDE";

    printf("before: %s\n", arr);
    ft_memmove(arr, arr + 2, 3);
    printf("after:  %s\n", arr);
} */
