/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:17:30 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/28 20:20:48 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "stdio.h"	//TODO remove


int ft_printf(const char *, ...);

int	ft_print_char(unsigned char c);
int	ft_print_str(char *s);
int	ft_print_int(int nb);
int	ft_print_int_base(int nbr, char *base);



size_t	ft_strlen(const char *s);

#endif
