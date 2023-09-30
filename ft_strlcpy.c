/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:22:02 by sborrego          #+#    #+#             */
/*   Updated: 2023/09/30 14:22:02 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	deslen;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	deslen = j;
	srclen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= deslen)
		return (srclen + dstsize);
	while (src[i] != '\0' && i < dstsize - deslen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (deslen + srclen);
}
