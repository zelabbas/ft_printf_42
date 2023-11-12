/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:02:02 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:19:38 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	ptr_dest = dest;
	ptr_src = src;
	i = 0;
	while (n > i)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
