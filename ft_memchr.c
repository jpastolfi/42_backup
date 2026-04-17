/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:57:20 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/17 11:08:02 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;
	unsigned char	to_match;

	ptr = (unsigned char *) s;
	to_match = (unsigned char) c;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == to_match)
		{
			return ((void *)&ptr[index]);
		}
		index++;
	}
	return (NULL);
}

/* int main(void)
{
	char *c = "BATATA";
	int n = 65;
	printf("Address found: %p\n", ft_memchr(c, n, 10));
} */