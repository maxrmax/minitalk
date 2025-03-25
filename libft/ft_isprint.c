/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:45:48 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:57 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int print)
{
	if (print >= 32 && print <= 126)
		return (1);
	return (0);
}

// checks if the passed value is a printable character
//(between 32 and 126 ascii table)

// #include <stdio.h>
// int	main(void)
// {
// 	printf("31:  %d\n", ft_isprint(31)); // Unit Seperator
// 	printf("32:  %d\n", ft_isprint(32)); // Space
// 	printf("126: %d\n", ft_isprint(126));// ~ Tilde
// 	printf("126: %d\n", ft_isprint(127));// DEL
// }
