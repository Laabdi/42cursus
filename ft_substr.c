/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:21:25 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/29 18:44:12 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	mlenf(size_t slen, unsigned int start, size_t len)
{
	if (slen - start < len)
		return (slen - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	size;

	slen = ft_strlen(s);
	size = mlenf(slen, start, len);
	if (start >= slen)
	{
		return (ft_strdup(""));
	}
	if (!s)
		return (NULL);
	sub = (char *)ft_calloc((size + 1), sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy((char *)sub, (s + start), size);
	return (sub);
}
