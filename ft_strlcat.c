/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:49:16 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:42:03 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;

	index = 0;
	dst_len = ft_strlen(dst);
	while (src[index] && dst_len + index + 1 < size)
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (ft_strlen(dst));
}

/* int  main(void)
{
	char dest[] = "Batata";
	char src[] = "Tomate";
	size_t size = 9;
	printf("dest antes: %s\n", dest);
	printf("src antes: %s\n", src);
	printf("Final length: %zu\n", ft_strlcat(dest, src, size));
	printf("dest depois: %s\n", dest);
	printf("src depois: %s\n", src);
} */