/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:10:23 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 13:00:32 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_ptr;
	unsigned char *s2_ptr;
	size_t index;

	if (n == 0)
		return (0);

	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	index = 0;
	while (index <= n && s1_ptr[index] == s2_ptr[index])
	{
		// printf("s1_ptr[index]: %c, s2_ptr[index]: %c\n", s1_ptr[index], s2_ptr[index]);
		index++;
	}
	// printf("%p is different from %p\n", &s1_ptr[index], &s2_ptr[index]);
	return (s1_ptr[index] - s2_ptr[index]);
}

/* int main(void)
{
	char *s1 = "Codigo";
	char *s2 = "Codiga";
	int s1[] = {65, 66, 67, 68};
	int s2[] = {65, 66, 67, 68};
	size_t n = 4;
	printf("Result: %d\n", ft_memcmp(s1, s2, n * sizeof(int)));
} */