/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:07:55 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 23:51:36 by rsitraki         ###   ########.fr       */
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
