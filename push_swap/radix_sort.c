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
	if (!size)
		return (1);
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ps_reverse_sorted(unsigned int *stack, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack[i] < stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	radix_sort(unsigned int *stack_a, unsigned int *stack_b,
			size_t *size, int bit)
{
	int				i;
	int				j;

	i = (int)size[0];
	j = (int)size[1];
	if (ps_sorted(stack_a, size[0]))
	{
		if (!size[1])
			return ;
		else if (ps_reverse_sorted(stack_b, size[1]))
		{
			while (i-- && (!(ps_sorted(stack_a, size[0]))))
				pb(stack_a, stack_b, size);
			j = (int)size[1];
			while (j--)
				pa(stack_a, stack_b, size);
			return ;
		}
	}
	if (size[0] == 3)
	{
		sort_3(stack_a, size[0]);
		return ;
	}
	ps_bitmasking(stack_a, stack_b, size, bit);
}

void	ps_bitmasking(unsigned int *stack_a, unsigned int *stack_b,
			size_t *size, int bit)
{
	int			i;
	int			j;
	int			bitmask;

	i = (int)size[0];
	bitmask = 0b1;
	while (i--)
	{
		if (!(bitmask & (stack_a[0] >> bit)))
			pb(stack_a, stack_b, size);
		else
			ra(stack_a, size[0]);
	}
	if (!(ps_reverse_sorted(stack_b, size[1])))
	{
		j = size[1];
		while (j--)
		{
			if (!(bitmask & (stack_b[0] >> (bit + 1))))
				rb(stack_b, size[1]);
			else
				pa(stack_a, stack_b, size);
		}
	}
	radix_sort(stack_a, stack_b, size, bit + 1);
}
