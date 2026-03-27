/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algo_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:09:18 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:09:19 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complex_algo.h"

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap_int(&arr[i], &arr[j]);
		}
		j++;
	}
	swap_int(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	quick_sort(int *arr, int low, int high)
{
	int	p_idx;

	if (low < high)
	{
		p_idx = partition(arr, low, high);
		quick_sort(arr, low, p_idx - 1);
		quick_sort(arr, p_idx + 1, high);
	}
}

void	assign_indices(t_node **stack, int *tmp, int size)
{
	t_node	*curr;
	int		i;

	curr = *stack;
	while (curr)
	{
		i = 0;
		while (i < size)
		{
			if (curr->value == tmp[i])
			{
				curr->index = i;
				break ;
			}
			i++;
		}
		curr = curr->next;
	}
}

int	*get_sorted_array(t_node *stack, int size)
{
	int		*tmp;
	int		i;
	t_node	*curr;

	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return (NULL);
	curr = stack;
	i = 0;
	while (i < size)
	{
		tmp[i++] = curr->value;
		curr = curr->next;
	}
	quick_sort(tmp, 0, size - 1);
	return (tmp);
}

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
