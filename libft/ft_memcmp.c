/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:48:46 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:02:55 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_cast;
	const unsigned char	*str2_cast;
	size_t				count;

	str1_cast = (unsigned char *)str1;
	str2_cast = (unsigned char *)str2;
	count = 0;
	while (count < n)
	{
		if (str1_cast[count] != str2_cast[count])
			return (str1_cast[count] - str2_cast[count]);
		count++;
	}
	return (0);
}
