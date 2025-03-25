/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:56:09 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 13:00:50 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}

// the result string called result
// i for iterating
// first duplicate and allocate the string as result
// if allocation failed, return NULL obviously
// while it has no existential crisis
// assign the new char of the current position in string
// with the char that was run through the function.
// return, result.

// char	functionname(unsigned int x, char c)
// {
// 	(void) x;
// 	(void) c;
// 	return ('g');
// }

// int	main(void)
// {
// 	char *s = ft_strmapi("some string", functionname);
// 	printf("s: %s\n", s);
// }

// // for every char in a string call f, return value of that into a new string
