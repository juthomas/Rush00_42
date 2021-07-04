/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:24:53 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/04 21:10:37 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solver.h"

char	**malloc_sudoku_tab(char **sudoku_tab)
{
	int		i;

	sudoku_tab = (char **)malloc(sizeof(char *) * 9);
	if (!sudoku_tab)
	{
		return (0);
	}
	i = 0;
	while (i < 9)
	{
		sudoku_tab[i] = (char *)malloc(sizeof(char) * 9);
		if (!sudoku_tab[i])
		{
			return (0);
		}
		i++;
	}
	return (sudoku_tab);
}

int	fill_sudoku_tab(char **argv, char **sudoku_tab)
{
	int	x;
	int	y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			sudoku_tab[y][x] = '3';
			if ((argv[y + 1][x] >= '0' && argv[y + 1][x] <= '9') \
				|| argv[y + 1][x] == '.')
			{
				sudoku_tab[y][x] = argv[y + 1][x];
			}
			else
			{
				ft_putchar(argv[y + 1][x]);
				return (-1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**sudoku_tab;

	sudoku_tab = malloc_sudoku_tab(sudoku_tab);
	if (!sudoku_tab)
	{
		ft_putstr("Error : malloc_sudoku_tab\n");
		return (-1);
	}
	if (argc != 10)
	{
		ft_putstr("Error : bad arguments number\n");
		return (-1);
	}
	if (fill_sudoku_tab(argv, sudoku_tab) < 0)
	{
		ft_putstr("Error : fill_sudoku_tab (parsing)\n");
		return (-1);
	}
	print_sudoku_tab(sudoku_tab);
}
