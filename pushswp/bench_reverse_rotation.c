/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_reverse_rotation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:04:17 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:10:33 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

void	bench_rra(t_bench *bench)
{
	bench->rra++;
}

void	bench_rrb(t_bench *bench)
{
	bench->rrb++;
}

void	bench_rrr(t_bench *bench)
{
	bench->rrr++;
}
