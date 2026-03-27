/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:10:42 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:10:43 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

int	check_duplicates(t_node *stack)
{
	t_hashset	*set;
	int			result;

	set = hashset_create();
	if (!set)
		return (1);
	result = 0;
	while (stack)
	{
		if (!hashset_insert(set, stack->value))
		{
			result = 1;
			break ;
		}
		stack = stack->next;
	}
	hashset_destroy(set);
	return (result);
}

int	is_sorted(t_node *stack)
{
	if (!stack || !stack->next)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
