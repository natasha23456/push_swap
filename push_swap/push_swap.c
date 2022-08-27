/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:42:41 by rkabzins          #+#    #+#             */
/*   Updated: 2022/05/19 19:42:51 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
}

int	n_exists(unsigned int *stack, const unsigned int stack_size, long check)
{
	unsigned int	index;

	index = 0;
	while (index < stack_size)
	{
		if (stack[index] == check)
			return (1);
		index++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	unsigned int	*stack;
	unsigned int	*temp;
	size_t			size_a;

	size_a = argc - 1;
	stack = error_check(size_a, argv);
	if (stack == 0)
	{
		error_exit();
		return (EXIT_FAILURE);
	}
	if (ps_sorted(stack, size_a))
		return (0);
	temp = malloc(sizeof(unsigned int *) * size_a);
	if (!temp)
	{
		write(2, "Error with memory allocation\n", 30);
		return (EXIT_FAILURE);
	}
	radix_sort(stack, temp, size_a, 0);
	free(stack);
	free(temp);
	return (0);
}
