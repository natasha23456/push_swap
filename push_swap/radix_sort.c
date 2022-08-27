/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <rkabzins@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:06:07 by rkabzins          #+#    #+#             */
/*   Updated: 2022/08/25 14:06:24 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	radix_sort(unsigned int *stack_a, unsigned int *stack_b,
			size_t size_a, int bit)
{
	int				bitmask;
	size_t			size_b;
	int				i;

	i = (int)size_a;
	size_b = 0;
	bitmask = 0b1;
	if (ps_sorted(stack_a, size_a))
		return ;
	if (size_a == 3)
	{
		sort_3(stack_a, size_a);
		return ;
	}
	while (i--)
	{
		if (!(bitmask & (stack_a[0] >> bit)))
			pb(stack_a, stack_b, &size_a, &size_b);
		else
			ra(stack_a, size_a);
	}
	while (size_b)
		pa(stack_a, stack_b, &size_a, &size_b);
	radix_sort(stack_a, stack_b, size_a, bit + 1);
}

void	sort_3(unsigned int *stack, unsigned int size)
{
	if (stack[0] > stack[1])
		sa(stack, size);
	if (stack[0] > stack[2])
	{
		rra(stack, size);
		sa(stack, size);
		ra(stack, size);
	}
	if (stack[1] > stack[2])
	{
		ra(stack, size);
		sa(stack, size);
		rra(stack, size);
	}
}

int	ps_sorted(unsigned int *stack, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
