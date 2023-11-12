/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:09:18 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:20:15 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (*src)
	{
		if (*src == (char)c)
		{
			return ((char *)src);
		}
		src++;
	}
	if (!(char)c)
	{
		return ((char *)src);
	}
	return (0);
}
