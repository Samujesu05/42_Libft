/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:19:06 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/03 12:19:06 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	*s = (const char)s;
	while ((*s != '\0' && c != *s) && n != 0)
	{
		s++;
		n--;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
