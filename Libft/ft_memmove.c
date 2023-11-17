/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:20:21 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/17 21:56:08 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!d || !s)
		return (NULL);
	if (d > s && d < s + n)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
