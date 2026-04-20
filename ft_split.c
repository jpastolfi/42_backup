/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:41:32 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/20 19:34:54 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *malloca(char const *s, unsigned int start, size_t len)
{
	char *result;

	result = ft_substr(s, start, len);
	return (result);
}

int count_words(char const *s, char c)
{
	int index;
	int total;

	index = 0;
	total = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		while (s[index] && s[index] != c)
		{
			index++;
		}
		if (s[index])
			total++;
	}
	return (total);
}

char 	**ft_split(char const *s, char c)
{
	int index;
	int counter;
	int start;
	int end;
	char **result;

	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	index = 0;
	counter = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		start = index;
		while (s[index] && s[index] != c)
		{
			index++;
		}
		end = index;
		result[counter++] = malloca(s, start, end - start);
	}
	for (int i = 0; i < count_words(s, c); i++)
	{
		printf("%s\n", result[i]);
	}
	return (result);
}

int main(void)
{
	/* ft_split("    Um caderno branco   ", ' '); */
	// ft_split("  tripouille  42  ", ' ');
	ft_split("     ", ' ');
}