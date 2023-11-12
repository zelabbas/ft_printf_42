/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:40:23 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/09 11:19:01 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	i_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	put_int(int n)
{
	char	*digits;

	digits = "0123456789";
	if (n > 9)
		put_int(n / 10);
	write(1, &digits[n % 10], 1);
}

int	prt_int(int n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
		return (write(1, "-2147483648", 11));
	len = i_digits(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	put_int(n);
	return (len);
}
