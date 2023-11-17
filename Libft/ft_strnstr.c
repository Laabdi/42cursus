/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:14:25 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 15:16:41 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tlen;

	if (!haystack || !needle)
		return (NULL);
	tlen = ft_strlen(needle);
	while (*haystack && len >= tlen)
	{
		if (ft_strncmp(haystack, needle, tlen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
