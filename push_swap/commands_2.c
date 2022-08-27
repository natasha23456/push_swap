/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <rkabzins@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:05:23 by rkabzins          #+#    #+#             */
/*   Updated: 2022/08/25 13:05:26 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// do ra and rb at the same time.
void	rr(unsigned int *stack_a, unsigned int *stack_b, const size_t size_a,
			const size_t size_b)
{
	rotate(stack_a, size_a);
	rotate(stack_b, size_b);
	ft_printf("rr\n");
}

// rotates the stack down by 1. First element becomes last.

void	reverse_rotate(unsigned int *stack, size_t index)
{
	int	temp;

	if (index < 2)
		return ;
	temp = stack[index - 1];
	while (--index)
		stack[index] = stack[index - 1];
	stack[0] = temp;
}

// shift all elements of stack a down by 1. last element becomes first.

void	rra(unsigned int *stack_a, const size_t size)
{
	reverse_rotate(stack_a, size);
	ft_printf("rra\n");
}

// shift all elements of stack b down by 1. last element becomes first.

void	rrb(unsigned int *stack_b, const size_t size)
{
	reverse_rotate(stack_b, size);
	ft_printf("rrb\n");
}

// do rra and rrb at the same time.

void	rrr(unsigned int *stack_a, unsigned int *stack_b, const size_t size_a,
			const size_t size_b)
{
	reverse_rotate(stack_a, size_a);
	reverse_rotate(stack_b, size_b);
	ft_printf("rrr\n");
}
