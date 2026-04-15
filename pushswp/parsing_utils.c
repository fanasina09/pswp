/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:14:14 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:14:16 by faharila         ###   ########.fr       */
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
