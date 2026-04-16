/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:42:34 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 15:35:53 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t index;
	size_t inner_index;

	if (little[0] == 0)
		return (big);
	index = 0;
	inner_index = 0;
	while (big[index] && index < len)
	{
		printf("big[index]: %c\n", big[index]);
		if (big[index] == little[inner_index])
		{
			inner_index++;
			while(big[index + inner_index] == little[inner_index])
			{
				inner_index++;
				if(little[inner_index] == 0)
				{
					return (big[index]);
				}
			}
		}
		index++;
	}
	return (NULL);
}

int main(void)
{
	ft_strnstr("Tomate", "at", 8);
}
