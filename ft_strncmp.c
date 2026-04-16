/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:49:15 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 19:35:49 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (n == 0)
	{
		return (0);
	}
	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] == s2[index] && index < n - 1)
		{
			index++;
		}
		else
		{
			break ;
		}
	}
	return (s1[index] - s2[index]);
}

/* int main() {
	char fst[] = "First";
	char scnd[] = "First";
	printf("%d\n", ft_strncmp(fst, scnd, 5));
	char thrd[] = "Fire";
	char frth[] = "Fi";
	printf("%d\n", ft_strncmp(thrd, frth, 3));
} */