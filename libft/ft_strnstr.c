/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:28:22 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:28:23 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	haystack_len;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (len < 0)
	{
		len = haystack_len + (haystack_len % len);
	}
	if (!needle_len)
		return ((char *)haystack);
	while (len >= needle_len)
	{
		len--;
		if (!ft_memcmp(haystack, needle, needle_len))
			return ((char *)haystack);
		if (*haystack++ == '\0')
			return (NULL);
	}
	return (NULL);
}
