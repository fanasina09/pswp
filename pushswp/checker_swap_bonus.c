/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:08:07 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:08:09 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	sa_sb(t_node **stack)
{
	int	temp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	sa_sb(stack_a);
	sa_sb(stack_b);
}

void	sa(t_node **a)
{
	sa_sb(a);
}

void	sb(t_node **b)
{
	sa_sb(b);
}
