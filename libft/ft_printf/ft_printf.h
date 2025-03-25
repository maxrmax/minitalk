/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:23:55 by mring             #+#    #+#             */
/*   Updated: 2024/11/05 12:43:04 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	parse_logic(char specifier, va_list args);
int	print_str(char *str);
int	print_hex_ptr(unsigned long number, int upper, int ptr);
int	print_digit(long number);
int	print_char(char c);

#endif