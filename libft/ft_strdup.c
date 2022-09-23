/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:11:27 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:11:37 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *source)
{
	char	*dest;
	size_t	src_len;

	src_len = ft_strlen(source) + 1;
	dest = malloc(src_len);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, source, (src_len));
	return (dest);
}
