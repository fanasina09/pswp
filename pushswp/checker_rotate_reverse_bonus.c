/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_reverse_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:07:53 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:07:56 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	rra_rrb(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	prev->next = NULL;
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra_rrb(stack_a);
	rra_rrb(stack_b);
}

void	rrb(t_node **b)
{
	rra_rrb(b);
}

void	rra(t_node **a)
{
	rra_rrb(a);
}
