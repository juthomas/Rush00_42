/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:12:01 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/13 00:24:25 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush01.h"

/*
 * Map :
 *
 *     60  56  52  48  44  40  36  32  28  24  20  16  12   8   4   0
 * 0b0000000000000000000000000000000000000000000000000000000000000000
 *      |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 *
 *                            12   8   4   0
 *                        0b0000000000000000
 *                            28  24  20  16
 *                        0b0000000000000000
 *                            44  40  36  32
 *                        0b0000000000000000
 *                            60  56  52  48
 *                        0b0000000000000000
*/

/*
 * Vision :
 *
 *     60  56  52  48  44  40  36  32  28  24  20  16  12   8   4   0
 * 0b0000000000000000000000000000000000000000000000000000000000000000
 *      |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
 *
 *                           A12  B8  C4  D0
 *                        0b0000000000000000
 *                           E28 F24 G20 H16
 *                        0b0000000000000000
 *                           I44 J40 K36 L32
 *                        0b0000000000000000
 *                           M60 N56 O52 P48
 *                        0b0000000000000000
 *
 *                              A B C D
 *                            F X X X X G
 *                            E X X X X H
 *                            I X X X X L
 *                            J X X X X K
 *                              M N O P
*/

void	feed_line(char **map, char c, int i, int size_max)
{
	if (i < size_max * 2)
	{
		map[0][(i / 2) + 1] = c;
	}
	else if (i < size_max * 4)
	{
		map[size_max + 1][((i) / 2) - size_max + 1] = c;
	}
	else if (i < size_max * 6)
	{
		map[((i) / 2) - size_max * 2 + 1][0] = c;
	}
	else
	{
		map[((i) / 2) - size_max * 3 + 1][size_max + 1] = c;
	}
}

char	**malloc_map(int size_max)
{
	char	**map;
	int		current_row;

	map = (char **)malloc(sizeof(char *) * (size_max + 1));
	if (!map)
	{
		return (0);
	}
	current_row = 0;
	while (current_row <= size_max + 1)
	{
		map[current_row] = (char *)malloc(sizeof(char) * (size_max + 1));
		if (!map[current_row])
		{
			return (0);
		}
		current_row++;
	}
	return (map);
}

int	init_map(char **map, int size_max)
{
	int	x;
	int	y;

	y = 0;
	while (y <= size_max + 1)
	{
		x = 0;
		while (x <= size_max + 1)
		{
			map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (1);
}

char	**parser(char *arg, int size_max)
{
	int		i;
	char	**map;

	map = malloc_map(size_max);
	if (!map)
	{
		return (0);
	}
	if (!init_map(map, size_max))
	{
		return (0);
	}
	i = 0;
	while (arg[i] && i < size_max * 4 * 2 )
	{
		if (i % 2 == 0)
		{
			if (arg[i] >= '1' && arg[i] <= '0' + size_max)
			{
				feed_line(map, arg[i], i, size_max);
			}
			else
			{
				return (0);
			}
		}
		else if (arg[i] != ' ')
			return (0);
		i++;
	}
	if (i != size_max * 4 * 2 - 1)
	{
		printf("i:%d\n", i);
	}
	return (map);
}
