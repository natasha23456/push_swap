/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:21:46 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:21:48 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	word_count(const char *str, char delimiter)
{
	int		i;
	int		separator;

	i = 0;
	separator = 0;
	while (*str)
	{
		if (*str != delimiter && separator == 0)
		{
			separator = 1;
			i++;
		}
		else if (*str == delimiter)
			separator = 0;
		str++;
	}
	return (i);
}

static char	*word_duplicate(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(const char *input, char delimiter)
{
	int		start;
	size_t	l;
	size_t	i;
	char	**split;

	split = malloc((word_count(input, delimiter) + 1) * sizeof(char *));
	if (!input || !split)
		return (0);
	l = 0;
	i = 0;
	start = -1;
	while (l <= ft_strlen(input))
	{
		if (input[l] != delimiter && start < 0)
			start = l;
		else if ((input[l] == delimiter || l == ft_strlen(input)) && start >= 0)
		{
			split[i++] = word_duplicate(input, start, l);
			start = -1;
		}
		l++;
	}
	split[i] = 0;
	return (split);
}
