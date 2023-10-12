/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:19:51 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/12 01:48:51 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*source;
	char				*destination;
	size_t				i;

	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		while (n-- > 0)
		{
			destination[n] = source[n];
		}
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}
