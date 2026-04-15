/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:07:14 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:07:15 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bench.h"
#include "checker_bonus.h"
#include "hashset.h"
#include "push_swap.h"

static int	process_arg(char *arg, t_node **a)
{
	if (is_number(arg))
	{
		if (!is_valid_number(arg))
		{
			ft_putstr_fd("Error\n", 2);
			return (-1);
		}
		add_back(a, new_node(ft_atoi(arg)));
		return (0);
	}
	if (fill_stack_string(arg, a) == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	return (0);
}

static int	fill_stack_args(int ac, char **av, t_node **a)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (process_arg(av[i], a) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	if (fill_stack_args(ac, av, &a) == -1)
		return (free_stack(&a), 1);
	if (check_duplicates(a))
	{
		ft_putstr_fd("Error\n", 2);
		return (free_stack(&a), 1);
	}
	if (read_commands(&a, &b) == -1)
		return (free_stack(&a), free_stack(&b), 1);
	stack_in_order(&a, &b);
	return (free_stack(&a), free_stack(&b), 0);
}
