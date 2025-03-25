/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:02:30 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 12:59:40 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char lower = 'a';
	char upper = 'F';
	int digit = 1;

	printf("original: %c\n", lower);
	printf("original: %c\n", upper);
	printf("original: %i\n", digit);
	printf("after: %c\n", ft_toupper(lower));
	printf("after: %c\n", ft_toupper(upper));
	printf("after: %i\n", ft_toupper(digit));
}*/
