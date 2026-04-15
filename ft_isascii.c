/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:39:26 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/15 17:39:26 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (
		(c >= 0 && c <= 127)
	);
}

/* int main (void)
{
	int i = 0;
	while (i <= 127)
	{
		printf("Testing %c: %d\n", (char) i, ft_isascii(i));
		i++;
	}
} */