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

	slen = ft_strlen(str);
	while (slen > 0)
	{
		slen--;
		if (str[slen] == character)
		{
			return ((char *)(str + slen));
		}
	}
	return (NULL);
}
