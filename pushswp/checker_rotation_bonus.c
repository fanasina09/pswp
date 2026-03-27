/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotation_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:07:38 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 23:51:26 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	ra_rb(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	last = *stack;
	while (last->next)
		last = last->next;
	first->next = NULL;
	last->next = first;
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	ra_rb(stack_a);
	ra_rb(stack_b);
}

void	rb(t_node **b)
{
	ra_rb(b);
}

void	ra(t_node **a)
{
	ra_rb(a);
}
