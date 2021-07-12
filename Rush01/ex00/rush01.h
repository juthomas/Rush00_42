/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:15:57 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/13 01:14:52 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
// print.c
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			print_map(char **map, int size_max);

// parser.c
char			**parser(char *arg, int size_max);

// solver.c
int				solver(char **map, int size_max);
#endif