/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_algo_utils1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:10:19 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:10:20 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_stack(t_node **top)
{
	int		count;
	t_node	*current;

	count = 0;
	current = *top;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

int	find_min(t_node **top)
{
	int		min;
	t_node	*current;

	if (!top || !*top)
		return (0);
	current = (*top)->next;
	min = (*top)->value;
	while (current != NULL)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}

int	find_max(t_node **top)
{
	int		max;
	t_node	*current;

	if (!top || !*top)
		return (0);
	max = (*top)->value;
	current = (*top)->next;
	while (current != NULL)
	{
		if (current->value > max)
			max = current->value;
		current = current->next;
	}
	return (max);
}

int	is_in_chunk(int value, int *sorted_array, int start_idx, int end_idx)
{
	int	i;

	i = start_idx;
	while (i <= end_idx)
	{
		if (sorted_array[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	get_pos_in_stack(t_node *stack, int value)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->value == value)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}
