/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:42:04 by mring             #+#    #+#             */
/*   Updated: 2024/11/05 12:42:15 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[count])
	{
		if (print_char(str[count]) == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	print_hex_ptr(unsigned long number, int upper, int ptr)
{
	char	*symbols;
	int		count;

	count = 0;
	if (ptr == 1)
	{
		count += write(1, "0x", 2);
		if (count == -1)
			return (-1);
	}
	if (upper == 1)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (number < 16)
		return (count += print_char(symbols[number]));
	count += print_hex_ptr(number / 16, upper, 0);
	if (count == -1)
		return (-1);
	return (count += print_hex_ptr(number % 16, upper, 0));
}

int	print_digit(long number)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		return (print_digit(-number) + 1);
	}
	else if (number < 10)
	{
		return (count += print_char(number + '0'));
	}
	else
	{
		count += print_digit(number / 10);
		if (count == -1)
			return (-1);
		return (count += print_digit(number % 10));
	}
}
