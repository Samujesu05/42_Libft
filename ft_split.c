/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sborrego <sborrego@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:54:55 by sborrego          #+#    #+#             */
/*   Updated: 2023/10/16 16:54:55 by sborrego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

static int	ft_word_len(char *s, char c, int *i)
{
	char	*j;
	int		aux;

	aux = 0;
	j = strchr(s, c);
	while (s[*i])
	{
		if (s[*i] != *j)
			i++;
		else
		{
			++i;
			aux = *i + 1 - aux;
			return (aux);
		}
		if (s[*i] == c)
			aux++;
	}
	return (aux);
}

static int	ft_count_words(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n;
	int		t;
	int		j;
	int		*i;
	char	*s_aux;

	s_aux = (char *)s;
	i = 0;
	n = ft_count_words(s_aux, c) + 1;
	t = n;
	result = malloc(sizeof(char *) * n);
	if (result == NULL)
		return (NULL);
	while (t != 0)
	{
		j = ft_word_len(s_aux, c, i);
		result = malloc(j + 1 * sizeof(char) + 1);
		if (result == NULL)
			return (NULL);
		while (*s_aux == c)
			s_aux++;
		memcpy(result, s_aux, j);
		s_aux = s_aux + j;
		*i = j + 1;
		t--;
	}
	return (result);
}

/* int main()
{
  char s1[] = "Hola Hola Hola      H Hola";
  char c1 = ' ';
  ft_split(s1, c1);
  return 0;
}
 */