# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 13:53:04 by lshonta           #+#    #+#              #
#    Updated: 2021/12/27 18:18:00 by lshonta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a 
HEADER := -I libft.h
LIST := ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
        ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_strjoin.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

LIST_B := ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

FLAGS := -g -Wall -Werror -Wextra

OBJ = $(patsubst %.c,%.o, $(LIST))
OBJB = $(patsubst %.c,%.o, $(LIST_B))
FILES = $(patsubst %.c,%.d,$(LIST))
FILES_B = $(patsubst %.c,%.d,$(LIST_B))

all: $(NAME)

$(NAME) : $(OBJ)
	 ar -rsc $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $<

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJB) 
	ar -rsc $(NAME) $(OBJ) $(OBJB) 

.PHONY: all clean fclean re