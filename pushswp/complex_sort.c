/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:10:05 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:12:38 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complex_algo.h"
#include "command.h"

void	sort_two_complex(t_node **a, t_bench *bench)
{
	if ((*a)->value > (*a)->next->value)
		ft_sa(a, bench);
}

void	sort_three_complex(t_node **a, t_bench *bench)
{
	int	v1;
	int	v2;
	int	v3;

	v1 = (*a)->value;
	v2 = (*a)->next->value;
	v3 = (*a)->next->next->value;
	if (v1 > v2 && v2 < v3 && v1 < v3)
		ft_sa(a, bench);
	else if (v1 > v2 && v2 > v3)
	{
		ft_sa(a, bench);
		ft_rra(a, bench);
	}
	else if (v1 > v2 && v2 < v3 && v1 > v3)
		ft_ra(a, bench);
	else if (v1 < v2 && v2 > v3 && v1 < v3)
	{
		ft_sa(a, bench);
		ft_ra(a, bench);
	}
	else if (v1 < v2 && v2 > v3 && v1 > v3)
		ft_rra(a, bench);
}

void	sort_four_complex(t_node **a, t_node **b, t_bench *bench)
{
	int	min;
	int	pos;
	int	size;

	min = find_min(a);
	pos = get_pos_in_stack(*a, min);
	size = count_stack(a);
	if (pos <= size / 2)
		while ((*a)->value != min)
			ft_ra(a, bench);
	else
		while ((*a)->value != min)
			ft_rra(a, bench);
	ft_pb(b, a, bench);
	sort_three_complex(a, bench);
	ft_pa(a, b, bench);
}

void	sort_five_complex(t_node **a, t_node **b, t_bench *bench)
{
	int	min;
	int	pos;
	int	size;
	int	pushed;

	pushed = 0;
	while (count_stack(a) > 3 && pushed < 2)
	{
		min = find_min(a);
		pos = get_pos_in_stack(*a, min);
		size = count_stack(a);
		if (pos <= size / 2)
			while ((*a)->value != min)
				ft_ra(a, bench);
		else
			while ((*a)->value != min)
				ft_rra(a, bench);
		ft_pb(b, a, bench);
		pushed++;
	}
	sort_three_complex(a, bench);
	if (*b && (*b)->next && (*b)->value < (*b)->next->value)
		ft_sb(b, bench);
	while (*b)
		ft_pa(a, b, bench);
}

void	radix_lsd_sort(t_node **a, t_node **b, int size, t_bench *bench)
{
	int	max_bits;
	int	bit;
	int	i;
	int	original_size;

	max_bits = get_max_bits(size);
	bit = 0;
	while (bit < max_bits)
	{
		original_size = count_stack(a);
		i = 0;
		while (i < original_size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
				ft_pb(b, a, bench);
			else
				ft_ra(a, bench);
			i++;
		}
		while (*b)
			ft_pa(a, b, bench);
		bit++;
	}
}
