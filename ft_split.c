/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:32:49 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/22 04:04:58 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char *s,char c)
{
    int i = 0;
	int count = 0;
    while(s[i])
    {
        while(s[i] == c)
        i++;
        if (s[i] == '\0')
            break;
        while(s[i] != c && s[i])
        i++;
        count++;
    }
    return(count);
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
static void	free_string(char **s, size_t i)
{
	while (i--)
		free(s[i]);
	free(s);
}
char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		i;
	char		**src;

	if (!s)
		return (NULL);
	len = count_words((char *)s, c);
	src = (char **)malloc(sizeof(char *) * (len + 1));
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
			if(!src[i])
			{
				free_string(src,i);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
			s++;
		}
	}
	src[i] = NULL;
	return (src);
}

