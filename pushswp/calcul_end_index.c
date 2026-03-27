/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_end_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:05:59 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:06:00 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_end_idx(int start, int chunk_size, int total_size)
{
	int	end;

	end = start + chunk_size - 1;
	if (end >= total_size)
		end = total_size - 1;
	return (end);
}
