/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:04:14 by sborrego          #+#    #+#             */
/*   Updated: 2023/09/26 20:18:30 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*destination;
	size_t				i;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	while (dest == src || !n)
	{
		return (dest);
	}
	while (n > i)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
