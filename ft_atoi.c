/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:11:00 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/05 13:11:00 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	negcheck;
	int	i;

	num = 0;
	i = 0;
	negcheck = 1;
	while (nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			negcheck *= -1;
		}
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * negcheck);
}
