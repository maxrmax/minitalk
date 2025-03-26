/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:01:33 by mring             #+#    #+#             */
/*   Updated: 2025/03/26 19:21:17 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

volatile sig_atomic_t	g_ack_received = 0;

void	ack_handler(int sig)
{
	(void)sig;
	g_ack_received = 1;
}

void	send_char(int pid, unsigned char c)
{
	int	bit;
	int	attempts;

	bit = 7;
	while (bit >= 0)
	{
		g_ack_received = 0;
		if (kill(pid, SIGUSR1 + ((c >> bit--) & 1)) == -1)
			exit(ft_printf("Error: kill() failed\n"));
		attempts = 0;
		while (!g_ack_received && attempts++ < 10)
			usleep(100);
		if (!g_ack_received)
			exit(ft_printf("Error: Timeout\n"));
		usleep(100);
	}
}

void	send_message(int pid, char *str)
{
	struct sigaction	sa;

	sa.sa_handler = ack_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	while (*str)
		send_char(pid, *str++);
	send_char(pid, '\0');
	while (!g_ack_received)
		pause();
}

int	main(int ac, char **av)
{
	if (ac == 3)
		send_message(ft_atoi(av[1]), av[2]);
	else
		return (ft_printf("Usage: %s <server_pid> <string>\n", av[0]), 1);
	return (0);
}
