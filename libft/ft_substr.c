/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:15:06 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:15:07 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(const char *source, unsigned int start, size_t output_length)
{
	size_t			i;
	size_t			source_length;
	char			*output_string;

	source_length = ft_strlen(source);
	i = 0;
	if (!source)
		return (NULL);
	if (start >= source_length)
		start = source_length;
	if ((source_length - start) < output_length)
		output_length = source_length - start;
	output_string = (char *)malloc(sizeof(char) * (output_length + 1));
	if (!output_string)
		return (NULL);
	while (i + start < source_length && i < output_length)
	{
		output_string[i] = source[i + start];
		i++;
	}
	output_string[i] = '\0';
	return (output_string);
}
