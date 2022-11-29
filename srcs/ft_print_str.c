/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:31:56 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/29 16:08:08 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft_printf.h"

/**
 * @brief Print a string and returned the length of the string or -1 is an 
 * error occurs.
 */
int	ft_print_str(char *s)
{
	int	len;

	if (!s)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	len = ft_strlen(s);
	if (write(1, s, len) == -1)
		return (-1);
	return (len);
}
