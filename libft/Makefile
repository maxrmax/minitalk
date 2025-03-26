# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mring <mring@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 10:34:52 by mring             #+#    #+#              #
#    Updated: 2025/03/26 12:47:33 by mring            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Defining the name of the target (executable)
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC 		=	ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset \
				ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower \
				ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi \
				ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa \
				ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

# adds printf
PRINTF_DIR = ./ft_printf
PRINTF_SRC = ft_printf ft_printf_print

# Append .c to all sources
SRCS = $(addsuffix .c, $(SRC)) \
       $(addprefix $(PRINTF_DIR)/, $(addsuffix .c, $(PRINTF_SRC)))

# Object files
OBJ_DIR = obj
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Bonus sources
BONUS_SRC = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap
BONUS_SRCS = $(addsuffix _bonus.c, $(BONUS_SRC))
BONUS_OBJS = $(BONUS_SRCS:%.c=$(OBJ_DIR)/%.o)

# Rule to compile .c files into .o files
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)  # Create the directory if it doesn't exist
	@$(CC) $(CFLAGS) -c $< -o $@


# Main rule to build the library
all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS) $(PRINTF)
	@echo "/// compiled: $(NAME) ///"

# Clean rule
clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(PRINTF_DIR) clean
	@echo "/// cleaning libft ///"

# Full clean rule
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(PRINTF_DIR) fclean

# Rebuild rule
re: fclean all

# Phony targets
.PHONY: all clean fclean re
