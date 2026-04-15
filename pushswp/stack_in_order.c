/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_in_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:16:55 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:16:57 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "hashset.h"

void	stack_in_order(t_node **a, t_node **b)
{
	if (*b == NULL && is_sorted(*a))
		ft_printf("OK\n");
	else
		ft_putstr_fd("KO\n", 2);
}
