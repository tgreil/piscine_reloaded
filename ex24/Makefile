# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgreil <tgreil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/10 13:32:03 by tgreil            #+#    #+#              #
#    Updated: 2018/02/19 15:49:45 by tgreil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc -Wall -Wextra -Werror -Iincludes -c

RM		=	rm -f

NAME	=	libft.a

SRCS	=	ft_putchar.c		\
			ft_putstr.c			\
			ft_strcmp.c			\
			ft_strlen.c			\
			ft_swap.c

OBJS	=	$(addprefix srcs/, $(SRCS:.c=.o))

$(NAME):	 $(OBJS)
		ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
