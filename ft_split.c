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
#include "libft.h"

static char	*ft_word_len(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	return (s);
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

static char	**ft_freemem(char **result)
{
	int		i;

	i = 0;
	while (result[i] != NULL)
	{
		if (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
	}
	free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		j;
	int		i;

	j = ft_count_words((char *)s, c) + 1;
	result = ft_calloc(sizeof(char *), j);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (*((char *)s) != '\0')
	{
		if (*((char *)s) != c)
		{
			j = ft_strlen((char *)s) + 1 - ft_strlen(ft_word_len((char *)s, c));
			result[i] = ft_calloc(j, sizeof(char));
			if (result[i] == NULL)
				return (ft_freemem(result));
			ft_strlcpy(result[i], (char *)s, j);
			i++;
			s = (char *)s + j - 2;
		}
		(char *)s++;
	}
	return (result);
}

/*int main()
{
  char s1[] = "Hola       sonic      mario buenas";
  char c1 = ' ';
  char **result = ft_split(s1, c1);
  printf("%s", result[0]);
  printf("%s", result[1]);
  printf("%s", result[2]);
  printf("%s", result[3]);
  return 0;
}*/