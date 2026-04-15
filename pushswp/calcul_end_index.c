/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_end_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:07:02 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:07:07 by faharila         ###   ########.fr       */
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
