/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:24:08 by juthomas          #+#    #+#             */
/*   Updated: 2021/07/04 21:11:57 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_SOLVER_H
# define SUDOKU_SOLVER_H
# include <unistd.h>
# include <stdlib.h>

//sudoku_solver.c
char	**malloc_sudoku_tab(char **sudoku_tab);
int		fill_sudoku_tab(char **argv, char **sudoku_tab);

//sudoku_solving.c
int		check_if_valid(char **sudoku_tab, int x, int y, char num);
int		check_if_num_exist_in_box(char **sudoku_tab, int x, int y, char num);

//sudoku_print.c
void	print_sudoku_tab(char **sudoku_tab);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif