# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sborrego <sborrego@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 13:51:11 by sborrego          #+#    #+#              #
#    Updated: 2023/10/26 19:16:21 by sborrego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = 		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
 			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c\
			ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c #ft_strmapi.c
SRCBONUS =	ft_lstnew_bonus.c 
OBJECTS = $(SRC:.c=.o)
OBJECTSBONUS = $(SRCBONUS:.c=.o)
CLEAN = rm -Rf

all: $(NAME)

$(NAME): %.o

	@ar rcs $(NAME) $(OBJECTS)

%.o:
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(CC) $(CFLAGS) -c $(SRCBONUS)
bonus: %.o
	@$(CC) $(CFLAGS) -c $(SRCBONUS)
	@ar rcs $(NAME) $(OBJECTSBONUS)

clean:
	@$(CLEAN) $(OBJECTS)
	@$(CLEAN) $(OBJECTSBONUS)

fclean:
	@$(CLEAN) $(OBJECTS)
	@$(CLEAN) $(OBJECTSBONUS)
	@$(CLEAN) $(NAME)

re: fclean all
.PHONY: all clean fclean bonus re