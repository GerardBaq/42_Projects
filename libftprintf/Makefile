# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: perico <perico@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 11:38:53 by gbaquero          #+#    #+#              #
#    Updated: 2023/05/31 00:39:37 by perico           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs

INC_DIR = inc

OBJ_DIR = objs

LIBFT_DIR = libft

FT_PRINTF_DIR = ft_printf

SRC_FILES = $(LIBFT_FILES) $(FT_PRINTF_FILES)

LIBFT_FILES = $(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_bzero.c \
$(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_isascii.c \
$(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_memchr.c \
$(LIBFT_DIR)/ft_memcpy.c $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_memmove.c \
$(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_strchr.c $(LIBFT_DIR)/ft_strlcat.c \
$(LIBFT_DIR)/ft_strlen.c $(LIBFT_DIR)/ft_strlcpy.c $(LIBFT_DIR)/ft_strncmp.c \
$(LIBFT_DIR)/ft_strnstr.c $(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_tolower.c \
$(LIBFT_DIR)/ft_toupper.c $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_strdup.c \
$(LIBFT_DIR)/ft_substr.c $(LIBFT_DIR)/ft_strjoin.c $(LIBFT_DIR)/ft_strtrim.c \
$(LIBFT_DIR)/ft_split.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_strmapi.c \
$(LIBFT_DIR)/ft_striteri.c $(LIBFT_DIR)/ft_putchr_fd.c \
$(LIBFT_DIR)/ft_putstr_fd.c $(LIBFT_DIR)/ft_putendl_fd.c \
$(LIBFT_DIR)/ft_putnbr_fd.c $(LIBFT_DIR)/ft_lstnew_bonus.c \
$(LIBFT_DIR)/ft_lstadd_front_bonus.c $(LIBFT_DIR)/ft_lstsize_bonus.c \
$(LIBFT_DIR)/ft_lstlast_bonus.c $(LIBFT_DIR)/ft_lstadd_back_bonus.c \
$(LIBFT_DIR)/ft_lstdelone_bonus.c $(LIBFT_DIR)/ft_lstclear_bonus.c \
$(LIBFT_DIR)/ft_lstiter_bonus.c $(LIBFT_DIR)/ft_lstmap_bonus.c

FT_PRINTF_FILES = $(FT_PRINTF_DIR)/ft_printf.c \
$(FT_PRINTF_DIR)/print_numbers.c $(FT_PRINTF_DIR)/print_words.c

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/libft.h
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/$(LIBFT_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_PRINTF_DIR)
	cc $(FLAGS)  -c -o $@ $<

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all