/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:59:11 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/26 17:38:25 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		lens1;
	int		lens2;
	char	*aux;

	if ((s1 != NULL) && (s2 != NULL))
	{
		lens1 = ft_strlen(s1);
		lens2 = ft_strlen(s2);
		aux = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
		if (aux == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			aux[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			aux[lens1] = s2[i];
			lens1++;
		}
		aux[lens1] = '\0';
		return (aux);
	}
	return (NULL);
}
