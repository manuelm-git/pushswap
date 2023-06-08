# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manumart <manumart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 15:36:11 by manumart          #+#    #+#              #
#    Updated: 2023/01/09 15:51:59 by manumart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
SRC = ft_printf ft_numbers ft_words\

CC =cc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra 


all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
