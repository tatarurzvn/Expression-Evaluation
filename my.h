/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 23:36:24 by rtataru           #+#    #+#             */
/*   Updated: 2017/09/30 17:40:32 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_atoi(char *str);

int		eval_expr(char *str);

int		summands(char **str);

int		atoms(char **str);

int		factors(char **str);

#endif
