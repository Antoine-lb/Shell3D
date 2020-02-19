# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-baux <ale-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/30 11:56:06 by ale-baux          #+#    #+#              #
#    Updated: 2020/02/04 13:44:05 by ale-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = cub3D

# FLAGS = -Wall -Wextra -Werror

LIBFT = libft

DIR_S = sources

DIR_O = temporary

HEADER = includes

SOURCES = main.c\
		terminal_output.c\
		get_next_line.c\
		initialize_global_struct.c\
		get_screenshot.c\
		parsing.c\
		is_line_valid.c\
		remove_spaces.c\
		parse_line_resolution.c\
		allocate_map.c\
		parse_line.c\
		parse_line_map.c\
		put_map_line_in_struct.c\
		parse_line_texture.c\
		get_path.c\
		parse_line_sprite.c\
		parse_line_floor_and_ceiling.c\


SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: temporary $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(FLAGS) -L $(LIBFT) -lft -o $@ $^

temporary:
	@mkdir -p temporary

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER)/cub3d.h
	@$(CC) $(FLAGS) -I $(HEADER) -c -o $@ $<

bonus: all

norme:
	@echo
	norminette ./$(LIBFT)
	@echo
	norminette ./$(HEADER)
	@echo
	norminette ./$(DIR_S)

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT)
	@rm -rf $(DIR_O)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean
	@$(MAKE) all

.PHONY: temporary, norme, clean
