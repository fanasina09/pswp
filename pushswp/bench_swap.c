/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:04:45 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:10:49 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

void	bench_sa(t_bench *bench)
{
	bench->sa++;
}

void	bench_sb(t_bench *bench)
{
	bench->sb++;
}

void	bench_ss(t_bench *bench)
{
	bench->ss++;
}
