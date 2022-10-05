# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:47:08 by rhong             #+#    #+#              #
#    Updated: 2022/10/05 17:22:17 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = so_long
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/windows.c
SRCS_B =

HEADER = ./src/so_long.h
HEADER_B =

OBJS_B = $(SRCS_B:.c=.o)
OBJS = $(SRCS:.c=.o)

LIB = ./minilibx_opengl/libmlx.a ./get_next_line/libgnl.a
LFLAG = -lmlx -framework OpenGL -framework AppKit -lz -lgnl -L./get_next_line

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
	make -j -C ./minilibx_opengl; make bonus -j -C ./get_next_line

clean :
	rm -rf $(OBJS) $(OBJS_B); make clean -C ./minilibx_opengl; make clean -C ./get_next_line

fclean : clean
	rm -rf $(NAME) $(OBJS_B); make fclean -C ./get_next_line

re :
	make fclean
	make all

bonus :
	make WITH_BONUS=1

.PHONY: all clean fclean re bonus