/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:41:34 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 15:02:30 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*p;

	index = 0;
	while (s[index])
	{
		// printf("A letra %c esta no endereco %p\n", s[index], &s[index]);
		if (s[index] == c)
		{
			p = (char *) &s[index];
			return (p);
		}
		index++;
	}
	return (NULL);
}

/* int main(void)
{
	char s[] = "Batata";
	char c = 't';
	printf("%p\n", ft_strchr(s, c));
} */