/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:24:35 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:24:36 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (!n || !size)
	{
		size = 1;
		n = size;
	}
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, n * size);
	return (ptr);
}
