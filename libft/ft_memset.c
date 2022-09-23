/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:20:18 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:20:53 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	value;

	str = ptr;
	value = (unsigned char)c;
	while (n--)
		*str++ = value;
	return (ptr);
}
