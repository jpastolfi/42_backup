/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jastolfi <jastolfi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:41:26 by jastolfi          #+#    #+#             */
/*   Updated: 2026/04/24 17:20:55 by jastolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include "limits.h"

void	ft_putnbr_fd(int n, int fd)
{
	(void)n;
	(void)fd;
	// ft_putstr_fd(ft_itoa(n), fd);
}

static void putnbr(int number)
{
	char c;
	if (number > 9)
	{
		putnbr(number / 10);
		c = number % 10;
		write(1, &c, 1);
	}
	else
	{
		write(1, &number, 1);
	}
}

int main(void)
{
	// ft_putnbr_fd(INT_MAX, 1);
	// ft_putnbr_fd(INT_MIN, 2);
	putnbr(1234);
}