#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/06 09:56:41 by sdurr             #+#    #+#              #
#    Updated: 2015/02/13 15:49:40 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= ft_minishell2

SRC			= main.c \
				ft_sh2.c \
				user.c \
				test_space.c \
				ft_av.c \
				ft_cd.c \
				ft_access.c \
				commande_sys.c \
				commande_not_found.c \
				commande_unsys.c \
				test_commande.c \
				child.c \
				split_path.c \
				ft_getenv.c \
				ft_set_env.c \
				ft_unset_env.c \

OBJ			= $(SRC:.c=.o)

CC			= gcc

export CFLAGS		= -Wall -Wextra -Werror

HPATH		= -I libft/includes

RM			= rm -rf

$(NAME)	:		$(OBJ)
				Make -C libft/
				$(CC) -o $(NAME) $(OBJ) -L libft/ -lft

clean	:
				$(RM) $(OBJ)
				Make -C libft/ fclean
				$(RM) *~

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.c.o	:
				$(CC) $(CFLAGS) $(HPATH) -c $(SRC)