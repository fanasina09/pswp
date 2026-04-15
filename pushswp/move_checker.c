/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:13:12 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:13:14 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	move_checker(t_node **a, t_node **b, char *command)
{
	if (ft_strncmp(command, "sa", ft_strlen(command)) == 0)
		sa(a);
	else if (ft_strncmp(command, "sb", ft_strlen(command)) == 0)
		sb(b);
	else if (ft_strncmp(command, "ss", ft_strlen(command)) == 0)
		ss(a, b);
	else if (ft_strncmp(command, "pa", ft_strlen(command)) == 0)
		pa(a, b);
	else if (ft_strncmp(command, "pb", ft_strlen(command)) == 0)
		pb(b, a);
	else if (ft_strncmp(command, "ra", ft_strlen(command)) == 0)
		ra(a);
	else if (ft_strncmp(command, "rb", ft_strlen(command)) == 0)
		rb(b);
	else if (ft_strncmp(command, "rr", ft_strlen(command)) == 0)
		rr(a, b);
	else if (ft_strncmp(command, "rra", ft_strlen(command)) == 0)
		rra(a);
	else if (ft_strncmp(command, "rrb", ft_strlen(command)) == 0)
		rrb(b);
	else if (ft_strncmp(command, "rrr", ft_strlen(command)) == 0)
		rrr(a, b);
	else
		ft_putstr_fd("Error\n", 2);
}
