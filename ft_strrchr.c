/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:42:37 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:42:45 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		index;
	char	*p;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		/* printf("&s[len]: %p\n", &s[len]);
		printf("s[len]: %c\n", s[len]); */
		if (s[len] == c)
		{
			p = (char *) &s[len];
			return (p);
		}
		len--;
	}
	return (NULL);
}

/* int main(void)
{
	char s[] = "ABCDEF";
	char c = 'C';
	printf("%p\n", ft_strrchr(s, c));
} */