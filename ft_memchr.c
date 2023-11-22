/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:09:02 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 18:46:58 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	val = (unsigned char) c;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == val)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
