/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_in_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:15:41 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:15:42 by rsitraki         ###   ########.fr       */
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
