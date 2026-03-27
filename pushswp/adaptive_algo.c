/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:03:20 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:10:24 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "complex_algo.h"

void	ft_adaptive_algo(t_node **stack_a, t_node **stack_b, t_bench *bench)
{
	float	disorder;

	disorder = compute_disorder(stack_a);
	if (disorder < 0.2)
		ft_simple_algo(stack_a, stack_b, bench);
	else if (disorder >= 0.2 && disorder < 0.5)
		ft_medium_algo(stack_a, stack_b, bench);
	else
		ft_complex_algo(stack_a, stack_b, bench);
}
