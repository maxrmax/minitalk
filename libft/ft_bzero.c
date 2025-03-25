/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:36:05 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 12:58:23 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, '\0', len);
}

// writes n zeroed bytes to the string s. If n is zero does nothing.
// #include <stdio.h>

// int	main(void)
// {
// // should be: "\0\0\0\0\0string for memset.$#@!@#$" at the end
// 	char	str[] = "Test string for memset.$#@!@#$";
// 	char	*ptr;

// 	ptr = str;
// 	printf("before: %s\n", str);
// 	ft_bzero(ptr, 5);
// 	printf(" after: %s\n", str);
// }
