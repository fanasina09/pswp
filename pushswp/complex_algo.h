/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_algo.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:09:47 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:09:48 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_ALGO_H
# define COMPLEX_ALGO_H
# include "push_swap.h"
# include "command.h"

int		get_max_bits(int size);
int		partition(int *arr, int low, int high);
int		*get_sorted_array(t_node *stack, int size);
void	ft_complex_algo(t_node **a, t_node **b, t_bench *bench);
void	quick_sort(int *arr, int low, int high);
void	assign_indices(t_node **stack, int *tmp, int size);
void	swap_int(int *a, int *b);
void	radix_lsd_sort(t_node **a, t_node **b, int size, t_bench *bench);
void	sort_five_complex(t_node **a, t_node **b, t_bench *bench);
void	sort_four_complex(t_node **a, t_node **b, t_bench *bench);
void	sort_three_complex(t_node **a, t_bench *bench);
void	sort_two_complex(t_node **a, t_bench *bench);

#endif