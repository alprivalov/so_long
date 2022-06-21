
LIBFT_PATH		=	./libs/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./libs/mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

GNL_PATH		=	./libs/get_next_line

SOURCES_FILES	=	so_long.c \
					ft_parsing.c \
					ft_structure_tree.c \
					ft_structure_biomes.c \
					ft_move_textures.c \
					ft_move_check.c \
					ft_init_texture_map.c \
					ft_init_texture_map_two.c \
					ft_init_texture_character.c \
					ft_animation_player.c \
					ft_init_texture_mobs.c \
					ft_destroy_image_one.c \
					ft_destroy_image_two.c \
					ft_stone_wall_init.c \
					ft_wall_init.c \
					ft_check_texture.c \
					ft_parse_texture_map.c \
					ft_slimbiome_init.c \
					ft_water_init.c \
					ft_plains_init.c \
					ft_init_texture_map_three.c \
					ft_move_texture_chest.c \
					ft_road_grass_slimebiome.c \

SOURCES_DIR		=	srcs
BONUS_DIR		=	srcs_bonus

HEADER			=	$(SOURCES_DIR)/so_long.h

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

OBJECTS			= 	$(SOURCES:.c=.o)

NAME			=	srcs/so_long

CC				=	gcc
RM				=	rm -f

CFLAGS			=	-g 
MLXFLAGS		=	-L./libs/mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -Llibs/libft/ -lft

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@
				
all:			$(NAME)

bonus:			$(NAME_BONUS)

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) $(MLXFLAGS) -o $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_PATH)

$(MINILIBX):
				$(MAKE) -C $(MINILIBX_PATH)

clean:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(MAKE) -C $(MINILIBX_PATH) clean
				$(RM) $(OBJECTS) $(OBJECTS_BONUS)

fclean:			clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME) $(NAME_BONUS)

re:				fclean all

.PHONY:			all clean fclean re libft minilibx bonus
