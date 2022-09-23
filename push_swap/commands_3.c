/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:06:51 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:06:53 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// swap the first two elements of only b

void	sb(unsigned int *stack_b, const size_t size)
{
	swap(stack_b, size);
	ft_printf("sb\n");
}

// do sa and sb at the same time.

void	ss(unsigned int *stack_a, unsigned int *stack_b, const size_t *size)
{
	swap(stack_a, size[0]);
	swap(stack_b, size[1]);
	ft_printf("ss\n");
}

// rotates the stack up by 1. First element becomes last.

void	rotate(unsigned int *stack, const size_t size)
{
	size_t			index;
	unsigned int	temp;

	index = 0;
	if (size < 2)
		return ;
	temp = stack[0];
	while (index < size - 1)
	{
		stack[index] = stack[index + 1];
		index++;
	}
	stack[size - 1] = temp;
}

// shift all elements of stack a up by 1. First element becomes last.

void	ra(unsigned int *stack_a, const size_t size)
{
	rotate(stack_a, size);
	ft_printf("ra\n");
}

// shift all elements of stack b up by 1. First element becomes last.

void	rb(unsigned int *stack_b, const size_t size)
{
	rotate(stack_b, size);
	ft_printf("rb\n");
}
