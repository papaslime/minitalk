# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 16:47:08 by cfilacch          #+#    #+#              #
#    Updated: 2025/08/28 16:47:12 by cfilacch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
NAME = libft.a
AR = ar rcs
SRC_DIR = src
OBJ_DIR = obj
SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
      ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
      ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
      ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
      ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
      ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
      ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
      ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
      ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstpenultimate.c \
      ft_printf.c get_next_line.c get_next_line_utils.c ft_abs.c
#ft_lstdelone.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$(NAME) has been created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	@for obj in $(OBJECTS); do \
		rm -f $$obj; \
		echo "Deleted $$obj"; \
	done

fclean: clean
	@rm -f $(NAME)
	@echo "Deleted $(NAME)"

re: fclean all

git:
	@git add *
	@read -p "Commit msg:" msg;\
	git commit -m "$$msg"
	git push
	@echo "Git add, commit, push performed"

.PHONY: all clean fclean re bonus

