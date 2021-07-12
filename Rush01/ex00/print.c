/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:13:45 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/12 23:48:41 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush01.h"

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

void	print_map(char **map, int size_max)
{
	int	x;
	int	y;

	y = 0;
	while (y <= size_max + 1)
	{
		x = 0;
		while (x <= size_max + 1)
		{
			ft_putchar(map[y][x]);
			if (x != size_max + 1)
			{
				ft_putchar(' ');
			}
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
