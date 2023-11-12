/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:59:42 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:18:50 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	bool	sign;
	int		d_count;
	char	*str;

	sign = n < 0;
	d_count = ft_count(n) + sign;
	str = (char *)malloc((d_count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[d_count] = 0;
	if (sign)
	{
		*str = '-';
		str[--d_count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (d_count-- - sign)
	{
		str[d_count] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
