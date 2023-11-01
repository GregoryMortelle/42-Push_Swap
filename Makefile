# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:35:50 by grmortel          #+#    #+#              #
#    Updated: 2023/11/01 13:51:31 by grmortel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	srcs/rotate.c srcs/swap.c  

LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft

PRINTF      =   ./printf/libftprintf.a
PRINTF_DIR  =   ./printf

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

GCC = gcc

RM = rm -f

$(NAME): $(OBJ)
	 $(NAME) $(OBJ) $(LIBFT) $(PRINTF)

$(LIBFT):
	@ $(MAKE) -C ./libft

$(PRINTF):
	@ $(MAKE) -C ./printf

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o) 

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re :    fclean $(NAME) 

.PHONY: all clean fclean re bonus