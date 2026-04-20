/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:42:34 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/20 14:48:24 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	inner_index;

	if (little[0] == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	index = 0;
	inner_index = 0;
	while (big[index] && index < len)
	{
		if (big[index] == little[inner_index])
		{
			while (big[index + inner_index] == little[inner_index]
				&& index + inner_index < len)
			{
				inner_index++;
				if (little[inner_index] == 0)
					return ((char *)&big[index]);
			}
			inner_index = 0;
		}
		index++;
	}
	return (NULL);
}

int main(void)
{
	// char haystack[30] = "aaabcabcd";
	// printf("Result: %s\n", ft_strnstr("abcccccdef", "cd", 8));
	// printf("Result: %s\n", ft_strnstr(haystack, "a", 1));
	printf("%s\n", ft_strnstr("    Batata   aaa  ", "Batata", 15));
}
