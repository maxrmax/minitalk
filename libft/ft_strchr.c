/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:12:26 by mring             #+#    #+#             */
/*   Updated: 2025/01/27 12:58:45 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

// compared char (*s) to int (c). was failing test 5 and 6. why?
// it promotes int to char and then compares.
// this can cause problems out of scope.
// also, adding char cc; below wouldn't work either.
// need thorough explanation for the difference in this case.
// chatgpt says below way is more proper as pointer is a direct
// pointer while above code is a pointer to i-th position,
// so a different pointer than *s? what
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 		{
// 			return ((char *)s);
// 		}
// 		s++;
// 	}
// 	if (*s == c)
// 		return ((char *)s);
// 	return (NULL);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str;
// 	char		searchfor;
// 	char		*foundat;

// 	str = "The lack of bra\0insoup is astonishing!";
// 	//searchfor = 'e';
// 	foundat = ft_strchr(str, 'e' + 256);
// 	if (foundat != NULL)
// 		printf("Character '%c' at position: %ld\n", *foundat, foundat - str);
// 	else
// 		printf("Character '%c' not found in the string.\n", searchfor);
// }
