/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njrafano <njrafano@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:04:00 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 20:10:18 by njrafano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

void	bench_pa(t_bench *bench)
{
	bench->pa++;
}

void	bench_pb(t_bench *bench)
{
	bench->pb++;
}
