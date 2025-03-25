/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:28:29 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:01:32 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (2);
	return (alpha >= 'A' && alpha <= 'Z');
}

// checks if a character is alpha

// #include <stdio.h>
// int	main(void)
// {
// 	printf("Smol: %d\n", ft_isalpha('a'));
// 	printf("Beeg: %d\n", ft_isalpha('A'));
// 	printf("Nooo: %d\n", ft_isalpha('3'));
// }
