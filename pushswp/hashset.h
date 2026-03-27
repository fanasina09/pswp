/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:11:07 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:11:08 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHSET_H
# define HASHSET_H
# include "push_swap.h"

# define HASHSET_SIZE 1024

typedef struct s_hash_node
{
	int					value;
	struct s_hash_node	*next;
}						t_hash_node;

typedef struct s_hashset
{
	t_hash_node			*buckets[HASHSET_SIZE];
}						t_hashset;

t_hashset				*hashset_create(void);
void					hashset_destroy(t_hashset *set);
int						hashset_insert(t_hashset *set, int value);
int						hashset_contains(t_hashset *set, int value);
unsigned int			hash_function(int value);
int						check_duplicates(t_node *stack);
int						is_sorted(t_node *stack);

#endif