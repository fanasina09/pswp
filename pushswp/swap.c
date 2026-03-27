/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:15:53 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:15:54 by rsitraki         ###   ########.fr       */
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
