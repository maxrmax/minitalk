/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:10:18 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 12:59:45 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
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
