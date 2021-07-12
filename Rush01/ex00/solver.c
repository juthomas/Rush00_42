/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 00:26:19 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/13 01:16:20 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush01.h"

int	count_line(char **map, int start_x, int start_y, int size_max)
{
	int counter = 0;
	int max = 0;
	int iterator = 0;

	while (iterator <= size_max)
	{
		if (start_x)
		{
			printf("%c", map[iterator][start_x]);
		}
		iterator++;
	}
	

}

int	count(char **map, int i, int size_max)
{
	int	start_x;
	int	start_y;
	int	direction;

	if (i < size_max)
	{
		count_line(map, i + 1, 0, size_max);
	
		// map[0][(i / 2) + 1] = c;
	}
	else if (i < size_max * 2)
	{
	
		// map[size_max + 1][((i) / 2) - size_max + 1] = c;
	}
	else if (i < size_max * 3)
	{
	
		// map[((i) / 2) - size_max * 2 + 1][0] = c;
	}
	else
	{
	
		// map[((i) / 2) - size_max * 3 + 1][size_max + 1] = c;
	}
}

int check_valid(char **map, int size_max)
{

}

int	recursive(char **map, int size_max, int i)
{

	count(map, 0, size_max);
}

int	solver(char **map, int size_max)
{
	recursive(map, size_max, 0);
}
