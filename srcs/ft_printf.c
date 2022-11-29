/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:24:08 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/28 20:21:01 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

int	ft_handle_format(const char *str, int i, va_list *args_list)
{
	if (str[i + 1] == 'c')
		return (ft_print_char(va_arg(*args_list, int)));
	else if (str[i + 1] == 's')
		return (ft_print_str(va_arg(*args_list, char *)));
	else if (str[i + 1] == 'p')
		return (ft_print_str("0x10") + ft_print_int_base(va_arg(*args_list, int), "0123456789abcdef"));
	else if (str[i + 1] == 'd')
		printf("I must print a decimal number (base 10)\n");
	else if (str[i + 1] == 'i')
		return (ft_print_int(va_arg(*args_list, int)));
	else if (str[i + 1] == 'u')
		//return (ft_print_double((double)va_arg(*args_list, double)));
		printf("I must print an unsigned double (base 10)\n");
	else if (str[i + 1] == 'x')
		return (ft_print_int_base(va_arg(*args_list, int), "0123456789abcdef"));
	else if (str[i + 1] == 'X')
		return (ft_print_int_base(va_arg(*args_list, int), "0123456789ABCDEF"));
	else if (str[i + 1] == '%' && str[i] == '%')
		return (ft_print_char('%'));
	else
		return (ft_print_char(va_arg(*args_list, int)));
	return (0);
}

/**
 * @brief The same as libc. Handle %c (char), %s (char *), %p (void *), 
 * %d (double), %i (int), %u (unsigned int), %x (hex number with small 
 * caps), %X (hex number with capital letters) and %%(print %).
 * 
 * @param str String containing format specifiers
 * @param ... Values to print
 * @return int The number of characters printed
 */
int	ft_printf(const char *str, ...)
{
	int		printed_lengh;
	int		i;
	va_list	args_list;

	va_start(args_list, str);
	i = 0;
	printed_lengh = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			printed_lengh += ft_handle_format(str, i, &args_list);
			i++;
		}
		else
			printed_lengh += ft_print_char((unsigned char)str[i]);
		i++;
	}
	va_end(args_list);
	return (printed_lengh);
}
