# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manumart <manumart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 20:06:13 by manumart          #+#    #+#              #
#    Updated: 2023/06/09 18:40:58 by manumart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS		=	Sources/lists/ft_lstaddback.c \
Sources/lists/ft_lstaddfront.c \
Sources/lists/ft_lstclear.c \
Sources/lists/ft_lstgetlast.c \
Sources/lists/ft_lstnew.c \
Sources/lists/ft_lstsize.c \
Sources/moves/push.c \
Sources/moves/rev_rotate.c \
Sources/moves/rotate.c \
Sources/moves/swap.c \
Sources/utils/checkerrors.c \
Sources/utils/ft_atoi.c \
Sources/utils/ft_isdigit.c \
Sources/utils/ft_strlen.c \
Sources/utils/ft_strncmp.c \
Sources/utils/utils.c \
Sources/alg/alg3.c \
Sources/alg/alg5.c \
Sources/alg/alg100.c \
main.c 


OBJS	=	${SRCS:.c=.o}
CC =cc
RM =rm -rf
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

all: $(NAME)

$(NAME): $(OBJS)
			make -C $(FT_PRINTF_PATH) 
			${CC} ${CFLAGS} $(OBJS) ${FT_PRINTF} -o ${NAME}
clean:
	$(RM)	$(OBJS)
	@make clean -C ${FT_PRINTF_PATH}
fclean: clean
		@rm -rf ${NAME}
		@make fclean -C ${FT_PRINTF_PATH}
 
re:	fclean	$(NAME)
