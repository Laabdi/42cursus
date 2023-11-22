/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:47:58 by moaregra          #+#    #+#             */
/*   Updated: 2023/11/22 00:38:47 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	if (total_size == 0)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if(total_size == 0)
		return (ptr);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
