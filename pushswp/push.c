/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:14:41 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:14:44 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "bench.h"

static void	ft_pa_pb(t_node **dst, t_node **src)
{
	t_node	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	ft_pb(t_node **b, t_node **a, t_bench *bench)
{
	ft_pa_pb(b, a);
	write(1, "pb\n", 3);
	if (bench)
		bench_pb(bench);
}

void	ft_pa(t_node **a, t_node **b, t_bench *bench)
{
	ft_pa_pb(a, b);
	write(1, "pa\n", 3);
	if (bench)
		bench_pa(bench);
}
