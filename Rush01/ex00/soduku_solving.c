/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soduku_solving.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:24:45 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/04 21:10:44 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solver.h"

int	check_if_num_exist_in_box(char **sudoku_tab, int x, int y, char num)
{
	int	beg_box_x;
	int	beg_box_y;
	int	tmp_x;
	int	tmp_y;

	beg_box_x = x / 3 * 3;
	beg_box_y = y / 3 * 3;
	tmp_y = 0;
	while (tmp_y < beg_box_y + 3)
	{
		tmp_x = 0;
		while (tmp_x < beg_box_x + 3)
		{
			if (num == sudoku_tab[tmp_y][tmp_x])
			{
				return (1);
			}
			tmp_x++;
		}
		tmp_y++;
	}
	return (0);
}

int	check_if_valid(char **sudoku_tab, int x, int y, char num)
{
	int	tmp;

	tmp = 0;
	while (tmp < 9)
	{
		if (num == sudoku_tab[y][tmp])
		{
			return (0);
		}
	}
	tmp = 0;
	while (tmp < 9)
	{
		if (num == sudoku_tab[tmp][x])
		{
			return (0);
		}
	}
	if (check_if_num_exist_in_box(sudoku_tab, x, y, num))
	{
		return (0);
	}
	return (1);
}

