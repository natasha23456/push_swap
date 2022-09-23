/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:14:39 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:14:40 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
