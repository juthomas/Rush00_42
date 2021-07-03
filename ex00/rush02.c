/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:14:42 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/03 20:24:50 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

void	ft_putchar(char c);

void	fill_caracter(int32_t x, int32_t y, int32_t tmp_x, int32_t tmp_y)
{
	if ((tmp_x == 0 && tmp_y == 0) || (tmp_x + 1 == x && tmp_y == 0))
	{
		ft_putchar('A');
	}
	else if ((tmp_x == 0 && tmp_y + 1 == y)
		|| (tmp_x + 1 == x && tmp_y + 1 == y))
	{
		ft_putchar('C');
	}
	else if ((tmp_x == 0 || tmp_x + 1 == x)
		|| (tmp_y == 0 || tmp_y + 1 == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int32_t x, int32_t y)
{
	int32_t	tmp_y;
	int32_t	tmp_x;

	tmp_y = 0;
	while (tmp_y < y)
	{
		while (tmp_x < x)
		{
			tmp_x = 0;
			fill_caracter(x, y, tmp_x, tmp_y);
			tmp_x++;
		}
		tmp_y++;
		ft_putchar('\n');
	}
}
