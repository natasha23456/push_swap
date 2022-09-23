/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_tracking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:18 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:08:39 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	size_change(size_t *size_plus, size_t *size_minus)
{
	(*size_plus)++;
	(*size_minus)--;
}
