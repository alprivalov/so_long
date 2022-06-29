
LIBFT_PATH		=	./libs/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./libs/mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

GNL_PATH		=	./libs/get_next_line

SOURCES_FILES	=	so_long.c \
					ft_structure_tree.c \
					ft_structure_biomes.c \
					ft_structure_dungeon.c \
					ft_structure_sb.c \
					ft_structure_water.c \
					ft_structure_plains.c \
					ft_structure_boss.c \
					ft_mob_mouvement.c \
					ft_structure_ws.c \
					ft_init_texture_mobs.c \
					ft_init_texture_map_three.c \
					ft_init_texture_map.c \
					ft_init_texture_map_two.c \
					ft_init_texture_character.c \
					ft_mob_attack.c	\
					ft_check_player_mob.c \
					ft_move_textures.c \
					ft_move_check.c \
					ft_check_texture_two.c \
					ft_move_ground.c \
					ft_move_texture_chest.c \
					ft_init_texture_map_four.c \
					ft_move.c \
					ft_animation_player.c \
					ft_animation_player_two.c \
					ft_dungeon.c \
					ft_structure_biomes_two.c \
					ft_slime.c \
					ft_spirit.c \
					ft_skeleton.c \
					ft_init_boss.c \
					ft_boss_spawn.c \
					ft_init_boss_death.c \
					ft_boss.c \
					ft_destroy_image_one.c \
					ft_destroy_image_two.c \
					ft_wall_init.c \
					ft_map_animation_parsing.c \
					ft_check_texture.c \
					ft_parse_texture_map.c \
					ft_parsing.c \
					ft_road_grass_slimebiome.c \
					ft_error.c \

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
