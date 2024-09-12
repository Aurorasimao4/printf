# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asimao <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 17:40:31 by asimao            #+#    #+#              #
#    Updated: 2024/05/28 17:42:36 by asimao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
INCLUDES = -I include
SRCS =	$(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_puts.c \
		$(SRC_DIR)/ft_puthex.c $(SRC_DIR)/ft_putnbr.c \
		$(SRC_DIR)/ft_putptr.c $(SRC_DIR)/ft_putunbr.c \
		$(SRC_DIR)/ft_puthex_m.c $(SRC_DIR)/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
MAIN = $(SRC_DIR)/main.c
EXEC = test_ft_printf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all

test: all
	$(CC) $(CFLAGS) $(MAIN) $(NAME) -o $(EXEC)
	./$(EXEC)
