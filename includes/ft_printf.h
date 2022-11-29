/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:17:30 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/29 16:16:11 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

/* print functions */
int		ft_print_char(unsigned char c);
int		ft_print_str(char *s);
int		ft_print_int(int nb);
int		ft_print_int_base(long nbr, char *base);
int		ft_print_ptr(unsigned long long nbr);
int		ft_print_uint(unsigned int nb);

/* utils */
size_t	ft_strlen(const char *s);

#endif
