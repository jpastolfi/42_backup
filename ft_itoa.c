/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:28:10 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/21 19:40:16 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int count_digits(int number)
{
	int counter;

	counter = 0;
	if (number < 0)
		counter++;
	while (number > 9)
	{
		number /= 10;
		counter++;
	}
	return (counter + 1);
}

/* static char *invert_string(char *string)
{
	int len;
	int index;
	char *result;

	index = 0;
	len = ft_strlen(string);
	result = malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	while (index < len)
	{
		result[index] = string[len - index];
		index++;
	}
	return (result);
} */

char	*ft_itoa(int n)
{
	char	*result;
	int 	digits;
	int 	i;
	int		next;

	if (n > INT_MAX || n < INT_MIN)
		return (NULL);
	digits = count_digits(n);
	result = malloc(digits + 1);
	if (!result)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		i++;
		result[0] = '-';
	}
	printf("%d\n", digits); // -123
	while (i < digits - 1)
	{
		printf("BABADO");
		/* printf("counter: %d\n", i);
		printf("digits: %d\n", digits);
		printf("digits - counter: %d\n", digits - i); */
		next = (n % 10);
		if (next < 0)
			next *= -1;
		result[digits - i] = (next + '0');
		n /= 10;
		i++;
	}
	result[digits] = '\0';
	return (result);
}

int main(void)
{
	printf("%s\n", ft_itoa(-123));
	// printf("digits: %d\n", count_digits(-1234));
}