/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:10:23 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/17 15:23:05 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			index;

	if (n == 0)
		return (0);
	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (s1_ptr[index] != s2_ptr[index])
		{
			return (s1_ptr[index] - s2_ptr[index]);
		}
		index++;
	}
	return (0);
}

/* int main(void)
{
	size_t n = 6;
	char *s1 = "Codigo";
	char *s2 = "Codiga";
	printf("Result: %d\n", ft_memcmp(s1, s2, n));
	char s[] = {128, 0, 127, 0};
	char sCpy[] = {128, 0, 127, 0};
	printf("Result: %d\n", ft_memcmp(s, sCpy, n));
} */