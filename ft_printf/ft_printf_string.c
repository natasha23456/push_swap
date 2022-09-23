/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:04:03 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:04:06 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printf_string(const char *input, int *output)
{
	int	i;

	i = 0;
	if (input == NULL)
	{
		(*output) += write(1, "(null)", 6);
		return ;
	}
	while (input[i])
	{
		ft_printf_char(input[i], output);
		i++;
	}
}
