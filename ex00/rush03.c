/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:14:39 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/01 22:14:40 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

void	ft_putchar(char c);

void	rush(int32_t x, int32_t y)
{
	for (int32_t tmp_y = 0; tmp_y < y; tmp_y++)
	{
		for (int32_t tmp_x = 0; tmp_x < x; tmp_x++)
		{
			if ((tmp_x == 0 && tmp_y == 0)
				|| (tmp_x == 0 && tmp_y + 1 == y))
			{
				ft_putchar('A');
			}
			else if ((tmp_x + 1 == x && tmp_y == 0)
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
		ft_putchar('\n');
	}
}