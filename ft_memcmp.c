/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:23:35 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/05 10:23:35 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)s1;
	dest = (unsigned char *)s2;
	i = 0;
	while (i < n && (src[i] != '\0' || dest[i] != '\0'))
	{
		if (src[i] > dest[i])
		{
			return (1);
		}
		else
		{
			if (src[i] < dest[i])
				return (-1);
		}
		i++;
	}
	return (0);
}
