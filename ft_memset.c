/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:25:43 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:39:57 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;
	unsigned char	final;

	ptr = (unsigned char *) s;
	index = 0;
	final = (unsigned char) c;
	while (index < n)
	{
		ptr[index] = final;
		index++;
	}
	return (s);
}

/* int main(void)
{
	char buffer[10];
	ft_memset(buffer, 65, sizeof(buffer));
	size_t index = 0;
	while (index < 10)
	{
		printf("index: %zu: %c\n", index, buffer[index]);
		index++;
	}
} */