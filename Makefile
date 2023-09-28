# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 13:51:11 by sborrego          #+#    #+#              #
#    Updated: 2023/09/26 18:37:52 by sborrego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
OBJECTS = $(SRC:%.c=%.o)
CLEAN = rm -Rf

all: $(NAME)

$(NAME): %.o

	@ar rcs $(NAME) $(OBJECTS)

%.o:
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@$(CLEAN) $(OBJECTS)

fclean:
	@$(CLEAN) $(OBJECTS)
	@$(CLEAN) $(NAME)

re: fclean all
.PHONY: all clean fclean re