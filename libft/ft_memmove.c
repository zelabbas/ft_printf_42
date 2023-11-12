/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:27:31 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:19:42 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (len != 0)
		{
			len--;
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, len);
	return (dest);
}
