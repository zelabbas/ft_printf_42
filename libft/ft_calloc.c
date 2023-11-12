/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:48:31 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:18:24 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	size_t			i;
	unsigned int	totale;

	totale = count * size;
	ptr = malloc(totale);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < totale)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
