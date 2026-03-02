# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/28 01:52:51 by vorhansa          #+#    #+#              #
#    Updated: 2026/02/27 04:33:56 by vorhansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC 	= ft_bzero.c \
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_strlen.c		\
	ft_memset.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strnstr.c	\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strdup.c		\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c 	\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_lstnew.c		\
	ft_lstadd_front.c \
	ft_lstadd_back.c \
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstdelone.c	\
	
OBJ_DIR	= obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rcs $@ $(OBJ)

$(OBJ_DIR)/%.o: %.c libft.h
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@rm -rf $(OBJ_DIR)
	@rm -f $(OBJ)
	
fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re