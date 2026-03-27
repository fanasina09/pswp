/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsitraki < rsitraki@student.42antananar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:13:12 by rsitraki          #+#    #+#             */
/*   Updated: 2026/03/18 19:13:13 by rsitraki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_bench_flag(char *arg)
{
	return (ft_strncmp(arg, "--bench", ft_strlen(arg)) == 0);
}

void	process_option(char *arg, int *bench_mode, char **flag)
{
	if (is_bench_flag(arg))
		*bench_mode = 1;
	else if (is_valid_flag(arg))
		*flag = arg;
}

void	scan_options(int ac, char **av, int *bench_mode, char **flag)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		process_option(av[i], bench_mode, flag);
		i++;
	}
}

int	find_first_number_index(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!is_bench_flag(av[i]) && !is_valid_flag(av[i]))
			return (i);
		i++;
	}
	return (-1);
}

int	has_options_after_numbers(int ac, char **av, int start_idx)
{
	int	i;

	i = start_idx;
	while (i < ac)
	{
		if (is_valid_flag(av[i]))
			return (1);
		i++;
	}
	return (0);
}
