/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:03:10 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:03:13 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printf_int(int n, int *output)
{
	if (n == -2147483648)
	{
		ft_printf_string("-2147483648", output);
	}
	else if (n < 0)
	{
		ft_printf_char('-', output);
		ft_printf_int(-n, output);
	}
	else if (n >= 10)
	{
		ft_printf_int(n / 10, output);
		ft_printf_char(n % 10 + '0', output);
	}
	else
	{
		ft_printf_char(n + '0', output);
	}
}
