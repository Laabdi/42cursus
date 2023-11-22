/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:18:33 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 22:13:11 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*s2;

	start = 0;
	while (s1[start] && (ft_strchr(set, s1[start]) != 0))
	start++;
	end = ft_strlen(s1);
	while (end > start && (ft_strchr(set, s1[end]) != 0))
	end--;
	len = end - start + 1;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + start, len);
	s2[len] = '\0'; 
	return (s2);
}
