/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:01:20 by mring             #+#    #+#             */
/*   Updated: 2025/03/26 19:13:07 by mring            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	handler(int sig, siginfo_t *info, void *ucontext)
{
	static sig_atomic_t	character;
	static sig_atomic_t	bits;
	static pid_t		current_client;

	(void)ucontext;
	if (info->si_pid != current_client)
	{
		character = 0;
		bits = 0;
		current_client = info->si_pid;
	}
	if (sig == SIGUSR2)
		character |= (1 << (7 - bits));
	bits++;
	kill(info->si_pid, SIGUSR1);
	if (bits == 8)
	{
		if (character == '\0')
			kill(current_client, SIGUSR1);
		else
			write(1, &character, 1);
		bits = 0;
		character = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
