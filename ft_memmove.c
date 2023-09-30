/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:19:51 by sborrego          #+#    #+#             */
/*   Updated: 2023/09/29 17:20:48 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*destination;
	size_t				i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = n;
	while (dest == src || !n)
	{
		return (dest);
	}
	if (dest < src)
	{
		while (i != 0)
		{
			destination[i] = source[i];
			i--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
