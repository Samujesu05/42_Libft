/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:10:24 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/10 19:56:10 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		else
		{
			if (s1[i] < s2[i])
				return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
