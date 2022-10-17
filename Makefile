# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:47:08 by rhong             #+#    #+#              #
#    Updated: 2022/10/17 20:42:55 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = so_long
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/button_event_handler.c ./src/clear_the_game.c ./src/destroy_game.c ./src/get_map.c ./src/get_p_pose.c ./src/img_err_handler.c ./src/main.c ./src/malloc_null_guard.c ./src/map_err_handler.c ./src/move_character.c ./src/put_map_to_window.c ./src/set_imgs.c ./src/sl_input_err_handler.c ./src/so_long.c ./src/trim_nl.c ./src/update_window.c ./src/write_err.c
SRCS_B =

HEADER = ./src/so_long.h
HEADER_B =

OBJS_B = $(SRCS_B:.c=.o)
OBJS = $(SRCS:.c=.o)

LIB = ./minilibx_opengl/libmlx.a ./get_next_line/libgnl.a ./libft/libft.a
LFLAG = -lmlx -framework OpenGL -framework AppKit -lz -lgnl -lft -L./get_next_line -L./libft

ifdef WITH_BONUS
	TOTAL_OBJS = $(OBJS_B)
else
	TOTAL_OBJS = $(OBJS)
endif

all : $(NAME) $(HEADER)

$(NAME): $(TOTAL_OBJS) $(LIB)
	$(CC) $(LFLAG) $(LIB) $(TOTAL_OBJS) -o $(NAME)

./obj/%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(LIB):
	make -j -C ./minilibx_opengl; make bonus -j -C ./get_next_line; make bonus -j -C ./libft

clean :
	rm -rf $(OBJS) $(OBJS_B); make clean -C ./minilibx_opengl; make clean -C ./get_next_line; make clean -C ./libft

fclean : clean
	rm -rf $(NAME) $(OBJS_B); make fclean -C ./get_next_line; make fclean -C ./libft

re :
	make fclean
	make all

bonus :
	make WITH_BONUS=1

.PHONY: all clean fclean re bonus