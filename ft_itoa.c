/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:14:41 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/26 20:04:30 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *a, int x)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = x - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	result[12];
	int		negcheck;
	int		i;
	int		temp;

	i = 0;
	negcheck = 0;
	if (n < 0)
		negcheck = 1;
	if (n == 0)
	{
		result[i++] = '0';
		result[i] = '\0';
		return (ft_strdup(result));
	}
	while (n != 0)
	{
		temp = n % 10;
		result[i++] = abs(temp) + '0';
		n = n / 10;
	}
	if (negcheck == 1)
		result[i++] = '-';
	result[i] = '\0';
	return (ft_strdup(ft_reverse(result, i)));
}
