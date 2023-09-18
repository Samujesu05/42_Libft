/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:56:49 by sborrego          #+#    #+#             */
/*   Updated: 2023/09/16 18:59:06 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (n > 0)
	{
		*a = (unsigned char)'\0';
		a++;
		n--;
	}
	return (b);
}