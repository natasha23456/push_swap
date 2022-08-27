/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <rkabzins@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:34:20 by rkabzins          #+#    #+#             */
/*   Updated: 2022/08/25 12:34:55 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isspace(int c)
{
	const char	*str;
	int			i;

	i = 0;
	str = " \n\t\v\f\r";
	while (c != str[i])
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}
