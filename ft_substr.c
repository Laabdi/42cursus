/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:21:25 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 15:23:37 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *src, char *dest)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	size_t	mlenf(size_t slen, unsigned int start, size_t len)
{
	if (slen - start < len)
		return (slen - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t slen;
	size_t size;

	slen = ft_strlen(s);
	size = mlenf(slen, start, len);
	if(start >= slen)
	{
		return (ft_strdup(""));
	}
		if (!s)
			return (NULL);
	sub = (char *)malloc(sizeof(char) * (size + 1));
	if (!sub)
		return (NULL);	
	ft_strcpy((char *)(s + start), sub);
	sub[len] = '\0';
	return (sub);
}
