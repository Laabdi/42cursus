/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:32:49 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/14 18:40:56 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s1, char b)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		while (s1[i] == b)
		i++;
		if (s1[i] != b)
		{
			count++;
			while (s1[i] && s1[i] != b)
			i++;
		}
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
	word = (char *)malloc(sizeof(char) * i + 1);
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

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		i;
	char		**src;

	if (!s)
		return (NULL);
	len = count_words((char *)s, c);
	src = (char **)malloc(sizeof(char *) * len + 1);
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
			i++;
			while (*s && *s != c)
			s++;
		}
	}
	src[i] = NULL;
	return (src);
}
