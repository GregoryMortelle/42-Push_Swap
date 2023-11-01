# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmortel <grmortel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 19:32:32 by grmortel          #+#    #+#              #
#    Updated: 2023/04/18 18:39:14 by grmortel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c		\
		ft_bzero.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c 	\
		ft_isdigit.c 	\
		ft_isprint.c	\
		ft_memset.c 	\
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 	\
		ft_putstr_fd.c 	\
		ft_strlen.c 	\
		ft_tolower.c 	\
		ft_toupper.c 	\
		ft_strlcpy.c	\
		ft_strncmp.c 	\
		ft_memcmp.c 	\
		ft_memcpy.c 	\
		ft_memmove.c 	\
		ft_memchr.c 	\
		ft_calloc.c 	\
		ft_strdup.c 	\
		ft_strchr.c 	\
		ft_strrchr.c 	\
		ft_substr.c 	\
		ft_strnstr.c 	\
		ft_strlcat.c 	\
		ft_strjoin.c 	\
		ft_strmapi.c 	\
		ft_striteri.c 	\
		ft_strtrim.c 	\
		ft_itoa.c 		\
		ft_split.c 
		
SRCS_BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c 	\
		ft_lstclear_bonus.c 		\
		ft_lstdelone_bonus.c 		\
		ft_lstiter_bonus.c 			\
		ft_lstlast_bonus.c 			\
		ft_lstmap_bonus.c 			\
		ft_lstnew_bonus.c 			\
		ft_lstsize_bonus.c

OBJ = $(SRCS:.c=.o)

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

AR = ar -rcs

CFLAGS = -Wall -Wextra -Werror

GCC = gcc

RM = rm -f

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean 
	$(RM) $(NAME)

re :    fclean $(NAME) 

.PHONY: all clean fclean re bonus