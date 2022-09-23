/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:25:55 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:25:56 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	dest_size;
	size_t	src_size;
	size_t	result;
	size_t	i;

	s = (char *)src;
	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size > dest_size)
		result = dest_size + src_size;
	else
		result = src_size + size;
	while (s[i] && (dest_size + 1) < size)
	{
		dest[dest_size] = s[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = 0;
	return (result);
}
