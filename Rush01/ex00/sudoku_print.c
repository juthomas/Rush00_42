/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:25:45 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/04 20:49:58 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solver.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

void	print_sudoku_tab(char **sudoku_tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			write(1, &sudoku_tab[y][x], 1);
			if (x != 8)
			{
				write(1, " ", 1);
			}
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
