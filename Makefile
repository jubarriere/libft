# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julbarri <julbarri@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/02 12:35:54 by julbarri          #+#    #+#              #
#    Updated: 2026/11/19 00:38:36 by julbarri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS =	-Wall -Wextra -Werror
NAME = libft.a
SRCS =	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_memcmp.c	\
	ft_memchr.c	\
	ft_atoi.c	\
	ft_strdup.c     \
	ft_calloc.c     \
	ft_substr.c     \
	ft_strjoin.c    \
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c    \
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_lstnew.c	\
	ft_lstadd_front.c	\
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstadd_back.c	\
	ft_lstdelone.c	\
	ft_lstclear.c	\
	ft_lstiter.c	\
	ft_lstmap.c	
HEADER = libft.h

OFILES = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -I. -c $< -o $@

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
