/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:06:21 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:06:22 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bench.h"

void	init_bench(t_bench *bench)
{
	bench->sa = 0;
	bench->sb = 0;
	bench->ss = 0;
	bench->pa = 0;
	bench->pb = 0;
	bench->ra = 0;
	bench->rb = 0;
	bench->rr = 0;
	bench->rra = 0;
	bench->rrb = 0;
	bench->rrr = 0;
}

int	get_total_ops(t_bench *bench)
{
	int	total;

	total = bench->sa + bench->sb + bench->ss;
	total += bench->pa + bench->pb;
	total += bench->ra + bench->rb + bench->rr;
	total += bench->rra + bench->rrb + bench->rrr;
	return (total);
}

char	*get_strategy_name(char *flag, float disorder)
{
	if (flag)
	{
		if (!ft_strncmp(flag, "--simple", ft_strlen(flag)))
			return ("Simple / O(n²)");
		if (!ft_strncmp(flag, "--medium", ft_strlen(flag)))
			return ("Medium / O(n√n)");
		if (!ft_strncmp(flag, "--complex", ft_strlen(flag)))
			return ("Complex / O(n log n)");
	}
	if (disorder < 0.2)
		return ("Adaptive / O(n²)");
	if (disorder >= 0.2 && disorder < 0.5)
		return ("Adaptive / O(n√n)");
	return ("Adaptive / O(n log n)");
}
