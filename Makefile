# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jveras <jveras@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 08:59:36 by jveras            #+#    #+#              #
#    Updated: 2023/11/03 09:02:57 by jveras           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Variables

NAME = libftprintf.a

SRCS = $(wildcard libft/*.c) $(wildcard libftprintf/*.c)

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf



### Rules

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


all: $(NAME)


clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re
