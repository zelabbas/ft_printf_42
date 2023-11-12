/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:34:36 by zelabbas          #+#    #+#             */
/*   Updated: 2023/11/07 13:20:32 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*origin;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc(((len_s1 + len_s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	origin = ptr;
	while (*s1)
	{
		*ptr++ = *s1++;
	}
	while (*s2)
	{
		*ptr++ = *s2++;
	}
	*ptr = '\0';
	return (origin);
}
