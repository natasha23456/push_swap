/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numformat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:04:20 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:04:23 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printf_chkpointer(unsigned long n, int base, int *output)
{
	base = 16;
	if (!n)
	{
		ft_printf_string(NULL, output);
		return ;
	}
	else
	{
		(*output) += write(1, "0x", 2);
		ft_printf_numformat(n, base, output, false);
	}
}

void	ft_printf_numformat(unsigned long n, int base, int *output, bool upper)
{
	char	*u_digits;
	char	*l_digits;
	char	*digits;

	u_digits = "0123456789ABCDEF";
	l_digits = "0123456789abcdef";
	if (base == 17)
	{
		ft_printf_chkpointer(n, 16, output);
		return ;
	}
	if (upper)
		digits = u_digits;
	else
		digits = l_digits;
	if (n < (unsigned int)base)
		ft_printf_char(digits[n], output);
	else
	{
		ft_printf_numformat(n / base, base, output, upper);
		ft_printf_numformat(n % base, base, output, upper);
	}
}
