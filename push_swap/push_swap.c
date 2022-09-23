/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:07:26 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:07:28 by nkidd            ###   ########.fr       */
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
	size_t			*size;

	size = malloc(sizeof(unsigned int *) * 2);
	size[0] = argc - 1;
	size[1] = 0;
	stack = error_check(size[0], argv);
	if (stack == 0)
	{
		error_exit();
		return (EXIT_FAILURE);
	}
	if (ps_sorted(stack, size[0]))
		return (0);
	temp = malloc(sizeof(unsigned int *) * size[0]);
	if (!temp)
	{
		write(2, "Error with memory allocation\n", 30);
		return (EXIT_FAILURE);
	}
	radix_sort(stack, temp, size, 0);
	free(stack);
	free(temp);
	return (0);
}
