/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:18:20 by mring             #+#    #+#             */
/*   Updated: 2024/11/05 12:42:31 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_logic(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if (specifier == 'p')
		count += print_hex_ptr(va_arg(args, unsigned long), 0, 1);
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(args, int));
	else if (specifier == 'u')
		count += print_digit(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += print_hex_ptr(va_arg(args, unsigned int), 0, 0);
	else if (specifier == 'X')
		count += print_hex_ptr(va_arg(args, unsigned int), 1, 0);
	else if (specifier == '%')
		count += print_char(specifier);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
			count += parse_logic(*(str++ + 1), args);
		else
			count += print_char(*str);
		if (count == -1)
		{
			va_end(args);
			return (-1);
		}
		str++;
	}
	va_end(args);
	return (count);
}
