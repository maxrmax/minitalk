/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:33:28 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:42 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
		return (1);
	return (0);
}

// checks if the passed value is ASCII.
// DESCRIPTION
//      The isascii() function tests for an ASCII character,
// which is any character between 0 and
// octal 0177 inclusive.

// #include <stdio.h>
// int	main(void)
// {
// 	char c = -42;
// 	printf("%d\n", ft_isascii(c));
// }
