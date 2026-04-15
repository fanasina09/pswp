/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:10:06 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:10:07 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "push_swap.h"

static int	parse_and_check(int ac, char **av, int start_idx, t_node **a)
{
	int	num_count;

	num_count = count_total_numbers_skip_options(ac, av, start_idx);
	if (num_count <= 0)
		return (print_error(), -1);
	if (!parse_args_skip_options(ac, av, start_idx, a))
	{
		free_stack(a);
		return (print_error(), -1);
	}
	if (check_duplicates(*a))
	{
		free_stack(a);
		return (print_error(), -1);
	}
	return (num_count);
}

static void	run_normal_mode(t_node **a, t_node **b, char *flag, int bench_mode)
{
	if (bench_mode)
		run_benchmark(a, b, flag);
	else if (flag)
		exec_algo(flag, a, b, NULL);
	else
		ft_adaptive_algo(a, b, NULL);
}

static int	void_bench(int start_idx, int bench_mode)
{
	if (start_idx == 0)
		return (0);
	if (start_idx == -2)
		return (print_error(), 0);
	if (start_idx == -1)
	{
		if (bench_mode)
		{
			ft_putstr_fd("[bench] disorder: 0.0%\n", 2);
			ft_putstr_fd("[bench] strategy: none\n", 2);
			ft_putstr_fd("[bench] total_ops:  0\n", 2);
			ft_putstr_fd("[bench] sa: 0 sb: 0 ss: 0 pa: 0 pb: 0\n", 2);
			ft_putstr_fd("[bench] ra: 0 rb: 0 rr: 0 rra: 0 rrb: 0 rrr: 0\n", 2);
			return (0);
		}
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	*flag;
	int		start_idx;
	int		bench_mode;

	a = NULL;
	b = NULL;
	start_idx = init_options(ac, av, &bench_mode, &flag);
	if (!void_bench(start_idx, bench_mode))
		return (0);
	if (parse_and_check(ac, av, start_idx, &a) <= 0)
		return (1);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	run_normal_mode(&a, &b, flag, bench_mode);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
