/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:32:49 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/28 18:50:22 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i])
		i++;
		count++;
	}
	return (count);
}

static char	*malloc_strings(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
	i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	free_string(char **s, size_t i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**src;

	if (!s)
		return (NULL);
	src = (char **)ft_calloc((count_words((char *)s, c) + 1), sizeof(char *));
	if (!src)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
		s++;
		if (*s && *s != c)
		{
			src[i] = malloc_strings(s, c);
			if (!src[i] && free_string(src, i))
				return (NULL);
			i++;
			while (*s && *s != c)
			s++;
		}
	}
	return (src);
}
