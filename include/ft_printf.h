/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:05:07 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:05:09 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

int		ft_printf(const char *format, ...);
void	ft_printf_char(const char input, int *output);
void	ft_printf_string(const char *input, int *output);
void	ft_printf_numformat(unsigned long n, int base, int *output, bool upper);
void	ft_printf_int(int n, int *output);

#endif
