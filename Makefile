# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 16:26:17 by cfilacch          #+#    #+#              #
#    Updated: 2025/08/28 16:28:57 by cfilacch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
# -fsanitize=address

LIBFT_DIR	=	./inc/libft/
LIBFT		=	$(LIBFT_DIR)libft.a
HDRS_DIR	=	./inc/
SRC_DIR		=	./src/

HDRS 		=	-I$(LIBFT_DIR)/inc -I$(HDRS_DIR)
LIBS		=	-L$(LIBFT_DIR)

all: libft server client

server:
	@echo "Compiling server..."
	$(CC) $(CFLAGS) -o server src/server.c $(HDRS) $(LIBFT)

client:
	@echo "Compiling client..."
	$(CC) $(CFLAGS) -o client src/client.c $(HDRS) $(LIBFT)

libft:
	@make all --quiet -C  $(LIBFT_DIR)
	@clear

clean:
	@make clean --quiet -C $(LIBFT_DIR)
	@for obj in $(OBJ); do \
		rm -f $$obj; \
		echo "Deleted $$obj"; \
	done

fclean: clean
	@make fclean --quiet -C $(LIBFT_DIR)
	@rm -f server
	@rm -f client
	@echo "Deleted server and client executables"

fclean_fast:
	@for obj in $(OBJ); do \
		rm -f $$obj; \
		echo "Deleted $$obj"; \
	done
	@rm -f $(NAME)
	@echo "Deleted $(NAME)"

re: fclean all

sre: fclean_fast all

norm:
	@norminette * | grep Error

git:
	@git add *
	@read -p "Commit msg:" msg;\
	git commit -m "$$msg"
	git push
	@echo "Git add, commit, push performed"

.PHONY: all clean fclean re sre git libft

