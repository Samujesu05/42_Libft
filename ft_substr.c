/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:57:43 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/26 16:48:12 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;

	if (!s)
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(s + start) < len)
	{
		len = ft_strlen(s + start);
	}
	aux = malloc(sizeof(char) * (len + 1));
	if (!aux)
	{
		return (0);
	}
	ft_strlcpy(aux, s + start, len + 1);
	return (aux);
}
