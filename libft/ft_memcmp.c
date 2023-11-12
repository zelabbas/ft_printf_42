/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:24:51 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:19:35 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*s11;
	const unsigned char		*s22;

	i = 0;
	s11 = s1;
	s22 = s2;
	if (!n)
		return (0);
	while (s11[i] == s22[i] && i + 1 < n)
		i++;
	return (s11[i] - s22[i]);
}
