/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:04:34 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:10:44 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

void	bench_ra(t_bench *bench)
{
	bench->ra++;
}

void	bench_rb(t_bench *bench)
{
	bench->rb++;
}

void	bench_rr(t_bench *bench)
{
	bench->rr++;
}
