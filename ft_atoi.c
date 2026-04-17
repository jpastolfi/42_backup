/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:32:24 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/17 18:14:08 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/* int static putnbr(char c)
{
	int n = c + 0;
	return (n);
} */

int	ft_atoi(const char *nptr)
{
	int		index;
	long	total;
	int		signal;

	index = 0;
	total = 0;
	signal = 1;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || (nptr[index] == 32))
	{
		index++;
	}
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			signal = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		if (total * 10 > INT_MAX || total * 10 < INT_MIN)
			return (0);
		total = (total * 10) + nptr[index] - '0';
		index++;
	}
	return ((int)(total * signal));
}

/* int main(void)
{
	printf("ft_atoi(+42lisboa): %d\n", ft_atoi("+42lisboa"));
	printf("ft_atoi(-+42): %d\n", ft_atoi("-+42"));
	printf("ft_atoi(+-42): %d\n", ft_atoi("+-42"));
	printf("ft_atoi(++INT_MAX): %d\n", ft_atoi("999999999999999999"));
	printf("ft_atoi(--INT_MIN): %d\n", ft_atoi("-999999999999999999"));
} */