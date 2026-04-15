/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:08:46 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:08:48 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "complex_algo.h"

int	get_max_bits(int size)
{
	int	bits;

	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	return (bits);
}

void	ft_complex_algo(t_node **a, t_node **b, t_bench *bench)
{
	int	size;
	int	*tmp;

	if (!a || !*a)
		return ;
	size = count_stack(a);
	if (size == 1)
		return ;
	if (size == 2)
		return (sort_two_complex(a, bench));
	if (size == 3)
		return (sort_three_complex(a, bench));
	if (size == 4)
		return (sort_four_complex(a, b, bench));
	if (size == 5)
		return (sort_five_complex(a, b, bench));
	tmp = get_sorted_array(*a, size);
	if (!tmp)
		return ;
	assign_indices(a, tmp, size);
	free(tmp);
	radix_lsd_sort(a, b, size, bench);
}
