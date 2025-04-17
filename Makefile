DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
REDP =    		\033[1;91m
YELLOW =		\033[0;93m
GREEN =			\033[0;92m
BLUE =          \033[0;94m
BROWN = 		\033[0;33m
PINK =			\033[0;35m

NAME = cub3

CC = gcc
RM = rm -rf

CFLAG = -Wall -Wextra -Werror -g3 -fsanitize=address

SOURCES = main.c \
			error.c \
			ft_valid_file.c \
			ft_created_map.c \
			ft_valid_map.c \
			ft_print_error.c \
			get_next_line.c \
			ft_free.c \
			ft_clean_line.c \
			ft_calloc.c \
			ft_bzero.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_substr.c \
			ft_strdup.c \
			ft_split.c \

OBJECT = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(CFLAG) $(OBJECT) -o $(NAME)

	@echo "       ,"
	@echo "       |"
	@echo "    ]  |.-._"
	@echo '     \|"(0)"| _]'
	@echo '     `|=\#/=|\/'
	@echo "      :  _  :"
	@echo "       \/_\/ "
	@echo "        |=| "
	@echo "        '-'"


%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@


clean:
	$(RM) $(OBJECT)
	@echo "\n${GRAY} ◎ $(RED)All objects and executable cleaned successfully${GRAY} ◎$(DEF_COLOR)\n"

fclean:			clean
				$(RM) $(NAME)

re: fclean all


.PHONY:			all clean fclean re test