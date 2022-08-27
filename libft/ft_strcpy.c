/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:38:43 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/27 23:41:34 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *destination, const char *source)
{
	char	*copied;

	copied = destination;
	while (*source++)
		*copied++ = *source;
	return (copied);
}

/*
int	main()
{
	char	*string;
	char	*destination;

	string = "Copied Text.";
	destination = malloc(sizeof(char) * ft_strlen(string) + 1);
	printf("string = %s\n", string);
	printf("destination = %s\n", ft_strcpy(destination, string));
}
*/
