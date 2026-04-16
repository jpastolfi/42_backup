/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:32:24 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/16 18:13:37 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* int static putnbr(char c)
{
	int n = c + 0;
	return (n);
} */

int ft_atoi(const char *nptr)
{
	int index;
	int total;
	int signal = 1;

	index = 0;
	total = 0;
	signal = 1;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || (nptr[index] == 32))
	{
		index++;
	}
	if (nptr[index] == 45)
	{
		signal = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		total = (total * 10) + nptr[index] - '0';
		index++;
	}
	return (total * signal);
}

/* int main(void)
{
	printf("ft_atoi(\"        -123 \"): %d", ft_atoi("        -123 "));
} */