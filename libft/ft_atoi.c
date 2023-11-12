/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:08:16 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/09 09:56:51 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_help(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

static char	*ft_zero(const char *s)
{
	while (*s && *s == '0')
	{
		s++;
	}
	return ((char *)s);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long		result;
	int					count;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	str = ft_zero(str);
	count = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
		count++;
	}
	if (result > LONG_MAX || count >= 20)
		return (ft_help(sign));
	return (result * sign);
}
