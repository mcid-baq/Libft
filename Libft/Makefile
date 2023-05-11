# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcid-baq <mcidbaquerizo@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 15:26:45 by mcid-baq          #+#    #+#              #
#    Updated: 2023/05/10 15:37:46 by mcid-baq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isascii.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_strlen.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_memset.c\
		ft_atoi.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_split.c\
		ft_strtrim.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_itoa.c\
		ft_putnbr_fd.c\

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstmap_bonus.c\
		ft_lstiter_bonus.c\

OBJECTS = $(FILES:.c=.o)

BOBJECTS = $(BONUS:.c=.o)

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	ar rcs $(NAME) $(OBJECTS) 

$(OBJECTS): $(FILES)
	$(CC) $(FLAGS) -c $(FILES)

$(BOBJECTS): $(BONUS)
	$(CC) $(FLAGS) -c $(BONUS)

bonus: $(OBJECTS) $(BOBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(BOBJECTS)

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME) $(OBJECTS) $(BOBJECTS)

re: fclean all

.PHONY: re all fclean clean bonus