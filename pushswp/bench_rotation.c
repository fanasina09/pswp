/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_rotation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:05:22 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:05:56 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bench.h"

void	bench_ra(t_bench *bench)
{
	bench -> ra ++;
}

void	bench_rb(t_bench *bench)
{
	bench -> rb ++;
}

void	bench_rr(t_bench *bench)
{
	bench -> rr ++;
}
