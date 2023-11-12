/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:05:42 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 14:51:08 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	digits;

	digits = !n;
	while (n)
	{
		n /= 16;
		digits++;
	}
	return (digits);
}

static void	put_hex(unsigned int n, bool upper)
{
	char	*hex_digitis_lower;
	char	*hex_digitis_upper;

	hex_digitis_lower = "0123456789abcdef";
	hex_digitis_upper = "0123456789ABCDEF";
	if (n >= 16)
		put_hex(n / 16, upper);
	if (upper == true)
		write (1, &hex_digitis_upper[n % 16], 1);
	else
		write(1, &hex_digitis_lower[n % 16], 1);
}

int	prt_hexa(unsigned int x, bool upper_case)
{
	put_hex(x, upper_case);
	return (h_digits(x));
}
