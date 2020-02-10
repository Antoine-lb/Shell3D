NAME = a.out
LIBFT_NAME = libft.a

#  color_output.c  left out
SRCS =	main.c\
		terminal_output.c\
		get_next_line.c\
		initialize_global_struct.c\
		get_screenshot.c\
		./parsing/parsing.c\
		./parsing/is_line_valid.c\
		./parsing/remove_spaces.c\
		./parsing/parse_line_resolution.c\
		./parsing/allocate_map.c\
		./parsing/parse_line.c\
		./parsing/parse_line_map.c\
		./parsing/put_map_line_in_struct.c\
		./parsing/parse_line_texture.c\
		./parsing/get_path.c\
		./parsing/parse_line_sprite.c\
		./parsing/parse_line_floor_and_ceiling.c\
		./parsing/create_rgb.c\

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

# CFLAGS = -Wall -Wextra -Werror

exec:	$(NAME)
		gcc ${CFLAGS} ${SRCS} ${LIBFT_NAME}
		./a.out "./maps/city/city.cub"
		${RM} ${OBJS}


$(NAME): $(OBJS)
	@make -C ./libft
	@cp libft/libft.a ./$(LIBFT_NAME)
	@ar rc $(LIBFT_NAME) $(OBJS)
	@ranlib $(LIBFT_NAME)
	
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

run:	all
		
norm:
		norminette ${SRCS}