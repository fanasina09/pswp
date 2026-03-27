/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:08:52 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:08:53 by rsitraki         ###   ########.fr       */
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