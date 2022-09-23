/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:14:03 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:14:05 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) dest;
	str2 = (unsigned char *) src;
	if (str1 < str2)
	{
		while (len--)
			*str1++ = *str2++;
	}
	else
	{
		while (len--)
			str1[len] = str2[len];
	}
	return (dest);
}
