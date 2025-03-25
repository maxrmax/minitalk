/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:41:53 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:50 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (1);
	return (0);
}

// checks if the passed value is a digit

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Number: %d\n", ft_isdigit('1'));
// 	printf("Char:   %d\n", ft_isdigit('A'));
// }
