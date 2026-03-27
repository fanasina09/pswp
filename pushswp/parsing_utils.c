/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:13:49 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:13:50 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_args(int ac, char **av, int start_idx, t_node **a)
{
	int	i;

	i = start_idx;
	while (i < ac)
	{
		if (!parse_str(av[i], a))
			return (0);
		i++;
	}
	return (1);
}
