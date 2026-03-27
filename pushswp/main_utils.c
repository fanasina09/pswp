/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:11:22 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:11:23 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "complex_algo.h"

float	compute_disorder(t_node **a)
{
	t_node	*cur_i;
	t_node	*cur_j;
	float	mistakes;
	float	total_pairs;

	mistakes = 0;
	total_pairs = 0;
	cur_i = *a;
	while (cur_i)
	{
		cur_j = cur_i->next;
		while (cur_j)
		{
			total_pairs++;
			if (cur_i->value > cur_j->value)
				mistakes++;
			cur_j = cur_j->next;
		}
		cur_i = cur_i->next;
	}
	if (total_pairs == 0)
		return (0);
	return ((float)mistakes / (float)total_pairs);
}

void	exec_algo(char *flag, t_node **a, t_node **b, t_bench *bench)
{
	if (!ft_strncmp(flag, "--simple", ft_strlen(flag)))
		ft_simple_algo(a, b, bench);
	else if (!ft_strncmp(flag, "--medium", ft_strlen(flag)))
		ft_medium_algo(a, b, bench);
	else if (!ft_strncmp(flag, "--complex", ft_strlen(flag)))
		ft_complex_algo(a, b, bench);
	else
		ft_adaptive_algo(a, b, bench);
}
