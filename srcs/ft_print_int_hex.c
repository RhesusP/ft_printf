/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:28:22 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/26 23:36:42 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

static int	ft_display_nb(long int nb, char *base, int base_size)
{
	long int	reste;
	int			printed_len;

	printed_len = 0;
	if (nb < 0)
	{
		printed_len += ft_print_char('-');
		nb *= -1;
	}
	reste = nb % base_size;
	nb = nb / base_size;
	if (nb > 0)
		printed_len += ft_display_nb(nb, base, base_size);
	printed_len += ft_print_char(base[reste]);
	return (printed_len);
}

int	ft_print_int_base(int nbr, char *base)
{
	int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	return (ft_display_nb((long int)(nbr), base, base_size));
}