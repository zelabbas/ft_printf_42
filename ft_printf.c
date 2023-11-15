/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:26 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/11 18:38:42 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	help_printf(va_list lst_arg, char c)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(lst_arg, int), 1);
		return (1);
	}
	else if (c == 'd' || c == 'i')
		return (prt_int(va_arg(lst_arg, int)));
	else if (c == 'x')
		return (prt_hexa(va_arg(lst_arg, unsigned int), false));
	else if (c == 'X')
		return (prt_hexa(va_arg(lst_arg, unsigned int), true));
	else if (c == 's')
		return (prt_str(va_arg(lst_arg, const char *)));
	else if (c == 'p')
		return (prt_adrr(va_arg(lst_arg, void *)));
	else if (c == 'u')
		return (prt_unsigned(va_arg(lst_arg, unsigned int)));
	else
		return (write(1, &c, 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	args;

	if (!format || write(1, "", 0) == -1)
		return (-1);
	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += help_printf(args, format[i]);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
