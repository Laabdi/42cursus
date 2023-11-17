/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:09:02 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/14 18:11:15 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
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
