# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 22:53:09 by yait-kad          #+#    #+#              #
#    Updated: 2019/10/31 18:56:38 by yait-kad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
		 ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c\
		 ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c\
		 ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c\
		 ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
		 ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		 ft_putnbr_fd.c

OBJECT = *.o

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) *.h
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

bonus:
	gcc -Wall -Wextra -Werror -c *_bonus.c
clean:
	rm -f $(OBJECT)

fclean: clean
	rm -fr $(NAME)

re: fclean all
