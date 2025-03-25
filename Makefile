# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/21 12:37:49 by mring             #+#    #+#              #
#    Updated: 2025/03/21 13:11:55 by mring            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= minitalk
CFLAGS			= -Wall -Wextra -Werror

CLIENT			= client
CLIENT_SRC		= client.c

SERVER			= server
SERVER_SRC 		= server.c

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

all: 			$(CLIENT) $(SERVER)

$(CLIENT):		$(CLIENT_SRC) $(LIBFT)
				@$(CC) $(CFLAGS) $< $(LIBFT) -o $(CLIENT)
				@echo "/// compiled: client ///"

$(SERVER):		$(SERVER_SRC) $(LIBFT)
				@$(CC) $(CFLAGS) $< $(LIBFT) -o $(SERVER)
				@echo "/// compiled: server ///"

${LIBFT}:
				@$(MAKE) -C $(LIBFT_PATH)

clean:
				@$(MAKE) -C $(LIBFT_PATH) clean
				@echo "/// cleaning minitalk ///"

fclean: 		clean
				@rm -f $(CLIENT) $(SERVER)
				@$(MAKE) -C $(LIBFT_PATH) fclean

re: 			fclean all

.PHONY:			all clean fclean re