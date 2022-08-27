/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <rkabzins@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:00:04 by rkabzins          #+#    #+#             */
/*   Updated: 2022/08/25 13:00:05 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// pushes the destination down one, then takes the first element of source and
// puts it on top of the destination, then shrinks the source.
void	ft_push(unsigned int *source, unsigned int *destination,
			const size_t *size_source, const size_t *size_dest)
{
	int	index;

	index = (int)*size_dest;
	if (*size_source == 0)
		return ;
	while (index > 0)
	{
		destination[index] = destination[index - 1];
		index--;
	}
	destination[0] = source[0];
	rotate(source, *size_source);
}

// push the first element of b to the top of a.

void	pa(unsigned int *stack_a, unsigned int *stack_b,
			size_t *a_size, size_t *b_size)
{
	if (*b_size == 0)
		return ;
	ft_push(stack_b, stack_a, b_size, a_size);
	size_change(a_size, b_size);
	ft_printf("pa\n");
}

// push the first element of a to the top of b.

void	pb(unsigned int *stack_a, unsigned int *stack_b,
			size_t *a_size, size_t *b_size)
{
	if (*a_size == 0)
		return ;
	ft_push(stack_a, stack_b, a_size, b_size);
	size_change(b_size, a_size);
	ft_printf("pb\n");
}

// swap the first two elements of only a

void	swap(unsigned int *stack, const size_t size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[1];
	stack[1] = stack[0];
	stack[0] = temp;
}

// swap the first two elements of only a

void	sa(unsigned int *stack_a, const size_t size)
{
	swap(stack_a, size);
	ft_printf("sa\n");
}
