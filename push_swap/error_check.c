/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:07:07 by nkidd             #+#    #+#             */
/*   Updated: 2022/09/20 18:07:12 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ps_parsing(unsigned int *stack, char *argument,
							unsigned int index)
{
	int		i;
	char	digit;
	char	next_digit;
	long	n;

	i = 0;
	digit = argument[i];
	while (digit)
	{
		next_digit = argument[i + 1];
		if (!(ft_isdigit(digit) || (digit == '-' && ft_isdigit(next_digit))))
			return (0);
		i++;
		digit = argument[i];
	}
	n = ft_atol(argument);
	if (n_exists(stack, index, n + INT_MAX + 1) == 1)
		return (0);
	if (n < INT_MIN || n > INT_MAX)
		return (0);
	return (1);
}

unsigned int	*error_check(int num_args, char **argv)
{
	int				index;
	unsigned int	*stack;

	if (num_args == 0)
		return (0);
	if (num_args == 1)
		return (0);
	index = 0;
	stack = malloc(sizeof(unsigned int *) * (num_args));
	while (index < num_args)
	{
		if (!(ps_parsing(stack, argv[index + 1], index)))
			return (0);
		stack[index] = atol(argv[index + 1]) + INT_MAX + 1;
		index++;
	}
	return (stack);
}
