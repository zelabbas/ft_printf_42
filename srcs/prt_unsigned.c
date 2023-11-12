/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:33:58 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/09 10:30:39 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	u_digits(unsigned int n)
{
	size_t	digits;

	digits = !n;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	put_unsigned(unsigned int u)
{
	char	*u_digits;

	u_digits = "0123456789";
	if (u >= 10)
		put_unsigned(u / 10);
	write(1, &u_digits[u % 10], 1);
}

int	prt_unsigned(unsigned int un)
{
	put_unsigned(un);
	return (u_digits(un));
}
