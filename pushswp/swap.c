/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:17:03 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:17:05 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"
#include "command.h"

static void	ft_sa_sb(t_node **stack)
{
	int	temp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	ft_ss(t_node **stack_a, t_node **stack_b, t_bench *bench)
{
	ft_sa_sb(stack_a);
	ft_sa_sb(stack_b);
	write(1, "ss\n", 3);
	if (bench)
		bench_ss(bench);
}

void	ft_sa(t_node **a, t_bench *bench)
{
	ft_sa_sb(a);
	write(1, "sa\n", 3);
	if (bench)
		bench_sa(bench);
}

void	ft_sb(t_node **b, t_bench *bench)
{
	ft_sa_sb(b);
	write(1, "sb\n", 3);
	if (bench)
		bench_sb(bench);
}
