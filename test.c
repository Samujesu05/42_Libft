/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:33:27 by sborrego          #+#    #+#             */
/*   Updated: 2023/09/16 19:00:06 by sborrego         ###   ########.fr       */
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

int main()
{
	int c;
	char str[] = "Hola";

	char *m = ft_memset(str, 2);
	printf("%s", m);
	return 0;
}