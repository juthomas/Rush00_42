/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:11:21 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/13 01:14:32 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush01.h"

int	main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
	{
		ft_putstr("Error\n");
	}
	else
	{
		map = parser(argv[1], 4);
		if (!map)
		{
			ft_putstr("Error\n");
		}
		print_map(map, 4);
		solver(map, 4);
	}
}
