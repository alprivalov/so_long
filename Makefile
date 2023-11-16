
LIBFT_PATH		=	./libs/libft
LIBFT			=	$(LIBFT_PATH)/libft.a

MINILIBX_PATH	=	./libs/mlx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a

GNL_PATH		=	./libs/get_next_line

SOURCES_FILES	=	so_long.c \
					ft_structure_plains.c \
					ft_road_grass_slimebiome.c \
					ft_parsing.c \
					ft_parse_texture_map.c \
					ft_move.c \
					ft_move_textures.c \
					ft_move_texture_chest.c \
					ft_move_ground.c \
					ft_move_check.c \
					ft_init_texture_map.c \
					ft_error.c \
					ft_check_texture.c \
					ft_destroy_all.c \

SOURCES_FILES_BONUS	=	so_long_bonus.c \
						ft_structure_tree_bonus.c \
						ft_structure_biomes_bonus.c \
						ft_structure_dungeon_bonus.c \
						ft_structure_sb_bonus.c \
						ft_structure_water_bonus.c \
						ft_structure_plains_bonus.c \
						ft_structure_boss_bonus.c \
						ft_mob_mouvement_bonus.c \
						ft_structure_ws_bonus.c \
						ft_init_texture_mobs_bonus.c \
						ft_init_texture_map_three_bonus.c \
						ft_init_texture_map_bonus.c \
						ft_init_texture_map_two_bonus.c \
						ft_init_texture_character_bonus.c \
						ft_mob_attack_bonus.c \
						ft_check_player_mob_bonus.c \
						ft_move_textures_bonus.c \
						ft_move_check_bonus.c \
						ft_check_texture_two_bonus.c \
						ft_move_ground_bonus.c \
						ft_move_texture_chest_bonus.c \
						ft_init_texture_map_four_bonus.c \
						ft_boss_idle_bonus.c \
						ft_move_bonus.c \
						ft_boss_spawn_spirit_bonus.c \
						ft_hud_bonus.c \
						ft_boss_death_bonus.c \
						ft_boss_two_bonus.c \
						ft_player_attack_bonus.c \
						ft_animation_player_bonus.c \
						ft_animation_player_two_bonus.c \
						ft_dungeon_bonus.c \
						ft_structure_biomes_two_bonus.c \
						ft_slime_bonus.c \
						ft_spirit_bonus.c \
						ft_skeleton_bonus.c \
						ft_init_boss_bonus.c \
						ft_init_boss_spawn_bonus.c \
						ft_init_boss_death_bonus.c \
						ft_boss_bonus.c \
						ft_destroy_image_one_bonus.c \
						ft_destroy_image_two_bonus.c \
						ft_wall_init_bonus.c \
						ft_map_animation_parsing_bonus.c \
						ft_check_texture_bonus.c \
						ft_parse_texture_map_bonus.c \
						ft_parsing_bonus.c \
						ft_road_grass_slimebiome_bonus.c \
						ft_error_bonus.c \

SOURCES_DIR		=	srcs_mandatory

BONUS_DIR		=	srcs_bonus

HEADER			=	$(SOURCES_DIR)/so_long.h

HEADER_BONUS	=	$(BONUS_DIR)/so_long_bonus.h

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

SOURCES_BONUS	=	$(addprefix $(BONUS_DIR)/, $(SOURCES_FILES_BONUS))

OBJECTS			= 	$(SOURCES:.c=.o)

OBJECTS_BONUS	= 	$(SOURCES_BONUS:.c=.o)

NAME			=	so_long

NAME_BONUS		=	so_long_bonus

CC				=	gcc
RM				=	rm -f

CFLAGS			=	-g 
MLXFLAGS		=	-L./libs/mlx -lmlx -L/usr/include/../lib -lXext -lX11 -lm -Llibs/libft/ -lft -Werror -Wextra -Wall

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@
				
all:			$(NAME)

bonus:			$(NAME_BONUS)

$(NAME):		$(LIBFT) $(MINILIBX) $(OBJECTS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJECTS) $(MLXFLAGS) -o $(NAME)

$(NAME_BONUS):		$(LIBFT) $(MINILIBX) $(OBJECTS_BONUS) $(HEADER_BONUS)
				$(CC) $(CFLAGS) $(OBJECTS_BONUS) $(MLXFLAGS) -o $(NAME_BONUS)

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
