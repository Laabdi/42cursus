/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:16:45 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 18:47:30 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t	slen;
	char	c;
	char	*s;

	s = (char *)str;
	c = (char)character;
	slen = ft_strlen(s);
	while (slen > 0)
	{
		if (str[slen] == c)
			return ((char *)(s + slen));
		slen--;
	}
	if (s[slen] == c)
		return (&s[slen]);
	return (NULL);
}
