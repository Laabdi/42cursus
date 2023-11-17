/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:23:56 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 18:47:09 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	value = (unsigned char)c;
	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}
