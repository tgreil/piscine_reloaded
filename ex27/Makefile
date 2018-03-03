#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgreil <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/06 12:31:38 by tgreil            #+#    #+#              #
#    Updated: 2018/02/06 12:32:07 by tgreil           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	=	ft_display_file.c		\
			ft_putstr_error.c

OBJS	=	$(addprefix srcs/, $(SRCS:.c=.o))

NAME	=	ft_display_file

RM		= rm -f

CC		= gcc -Wall -Wextra -Werror -Iincludes

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
