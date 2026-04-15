/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:17:19 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:40:18 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	index = 0;
	while (index < len)
	{
		ptr[index] = 0;
		index++;
	}
}

/* int main(void)
{
	size_t index = 0;
	char buffer[10] = "Batatatata";
	while (index < 10)
	{
		printf("index: %zu: %c\n", index, buffer[index]);
		index++;
	}
	ft_bzero(buffer, sizeof(buffer));
	index = 0;
	while (index < 10)
	{
		printf("index: %zu: %c\n", index, buffer[index]);
		index++;
	}
} */