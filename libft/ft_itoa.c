/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 01:35:29 by rkabzins          #+#    #+#             */
/*   Updated: 2022/03/01 01:35:34 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	num_length(int n)
{
	size_t	length;

	if (!n)
		return (1);
	if (n < 0)
		n *= -1;
	length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*putnumber(char *dest, int n, int index)
{
	unsigned int	number;

	number = n;
	if (n < 0)
		number = -n;
	while (index--)
	{
		dest[index] = (number % 10) + '0';
		if (number > 9)
			number /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

char	*ft_itoa(int number)
{
	char	*str;
	size_t	length;

	length = num_length(number);
	if (number < 0)
		length++;
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	putnumber(str, number, length);
	str[length] = '\0';
	return (str);
}

/*
int	main()
{
	int		number;
	char	*string;

	number = 48321127;
	string = ft_itoa(number);
	printf("Our number can be printed as a string! Look: %s\n", string);
}
*/
