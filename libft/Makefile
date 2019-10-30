# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 22:53:09 by yait-kad          #+#    #+#              #
#    Updated: 2019/10/30 20:52:15 by yait-kad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =ft_*.c

OBJECT = ft_*.o

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
