/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:40:12 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/28 20:20:30 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

int	ft_print_int(int nb)
{
	int len;

	len = 0;
	if (nb == -2147483648)
	{
		nb = 147483648;
		len += ft_print_char('-');
		len += ft_print_char(2 + '0');
	}
	if (nb < 0)
	{
		len += ft_print_char('-');
		len += ft_print_int(nb *= -1);
		return (len);
	}
	if (nb >= 10)
	{
		len += ft_print_int(nb / 10);
		len += ft_print_char((nb % 10) + '0');
	}
	else
		len += ft_print_char(nb + '0');
	printf("len : %d\n", len);
	return (len);
}