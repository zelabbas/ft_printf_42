/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_adrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:58:47 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/09 10:06:10 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	p_digits(unsigned long n)
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

static void	put_ptr(unsigned long p)
{
	char	*hex_digitis;

	hex_digitis = "0123456789abcdef";
	if (p >= 16)
		put_ptr(p / 16);
	write(1, &hex_digitis[p % 16], 1);
}

int	prt_adrr(void *adrr)
{
	if (!adrr)
		return (write(1, "0x0", 3));
	write (1, "0x", 2);
	put_ptr((unsigned long)adrr);
	return (p_digits((unsigned long)adrr) + 2);
}
