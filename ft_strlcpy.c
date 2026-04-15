/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:57:00 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:42:15 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	if (size == 0)
		return (ft_strlen(src));
	index = 0;
	while (src[index] != '\0' && index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}

/* int main(void)
{
	char dest[] = "Batata";
	char src[] = "Tomate";
	size_t size = 3;
	printf("dest antes: %s\n", dest);
	printf("src antes: %s\n", src);
	ft_strlcpy(dest, src, size);
	printf("dest depois: %s\n", dest);
	printf("src depois: %s\n", src);
} */