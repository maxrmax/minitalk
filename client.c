/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:01:33 by mring             #+#    #+#             */
/*   Updated: 2025/03/25 15:45:21 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

int	send_char(int server_pid, unsigned char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		kill(server_pid, SIGUSR1 + !!(c & (1 << bit++)));
		usleep(50);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
		while (av[2][i] != '\0')
			send_char(ft_atoi(av[1]), av[2][i++]);
	else
		return (ft_printf("Wrong Usage: %s <server_pid> <string>\n", av[0]), 1);
	return (0);
}
