/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faharila <faharila@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:08:21 by faharila          #+#    #+#             */
/*   Updated: 2026/04/16 01:08:23 by faharila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_H
# define COMMAND_H

# include "push_swap.h"

void	ft_pb(t_node **b, t_node **a, t_bench *bench);
void	ft_pa(t_node **a, t_node **b, t_bench *bench);
void	ft_rb(t_node **b, t_bench *bench);
void	ft_ra(t_node **a, t_bench *bench);
void	ft_rr(t_node **stack_a, t_node **stack_b, t_bench *bench);
void	ft_ss(t_node **stack_a, t_node **stack_b, t_bench *bench);
void	ft_rra(t_node **a, t_bench *bench);
void	ft_rrb(t_node **b, t_bench *bench);
void	ft_rrr(t_node **stack_a, t_node **stack_b, t_bench *bench);
void	ft_sa(t_node **a, t_bench *bench);
void	ft_sb(t_node **b, t_bench *bench);

#endif