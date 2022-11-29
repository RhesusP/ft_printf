/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:05:36 by cbernot           #+#    #+#             */
/*   Updated: 2022/11/29 08:25:06 by cbernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>

int main()
{
	char *str = "les amis de 42 !";
	int n = -2147;
	
	printf("original printf:\n");
	printf("%i", 42);
	printf("\n--------------------------------------------------\nMy own ft_printf:\n");
	ft_printf("%i", 42);
}