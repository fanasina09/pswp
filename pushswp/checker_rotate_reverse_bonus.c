/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_reverse_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:07:04 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 23:51:31 by rsitraki         ###   ########.fr       */
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
