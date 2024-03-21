# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:35:50 by grmortel          #+#    #+#              #
#    Updated: 2024/03/21 15:26:12 by grmortel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	srcs/push_swap.c        \
		srcs/rotate.c            \
		srcs/swap.c               \
		srcs/reverse_rotate.c      \
		srcs/push.c                 \
		libft_utils/ft_strlcpy.c     \
		libft_utils/ft_lstadd_back.c  \
		libft_utils/ft_lstadd_front.c  \
		libft_utils/ft_lstlast.c        \
		libft_utils/ft_lstsize.c         \
		libft_utils/ft_atoi.c             \
		libft_utils/ft_split.c             \

OBJ = $(SRCS:.c=.o)

GCC = gcc

CFLAGS = -Wall -Wextra -Werror 

RM = rm -rf

$(NAME): $(OBJ)
	 $(GCC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re :    fclean $(NAME) 

.PHONY: all clean fclean re bonus