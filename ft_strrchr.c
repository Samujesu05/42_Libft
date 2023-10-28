/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:08:59 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/28 16:08:59 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*res;

	c = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (res);
}
