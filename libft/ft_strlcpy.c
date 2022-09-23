/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:30:32 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:30:33 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	size_t	i;

	if (!dest || !source)
		return (0);
	i = 0;
	while (source[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (source[i] && i < size - 1)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (source[i])
		i++;
	return (i);
}
