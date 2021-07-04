/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 22:14:21 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/03 20:33:58 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

void	rush(int32_t x, int32_t y);

int	main(int32_t argc, char **argv)
{
	if (argc == 3)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
	else
	{
		rush(1, 5);
	}
	return (0);
}
