CC			=gcc
CFLAGS		=-Wall -Werror -Wextra

SRC			=./srcs/main.c\
			./srcs/boot/ft_error_format.c\
			./srcs/boot/ft_write_dico.c\
			./srcs/boot/ft_get_file_data.c\
			./srcs/boot/ft_get_lines.c\
			./srcs/boot/ft_lines_list_from_file_data.c\
			./srcs/boot/ft_remove_empty_lines.c\
			./srcs/core/ft_dicterror_nbr.c\
			./srcs/core/ft_print_nbr.c\
			./srcs/utils/ft_errors.c\
			./srcs/utils/ft_atoll.c\
			./srcs/utils/ft_dico.c\
			./srcs/utils/ft_display.c\
			./srcs/utils/ft_list.c\
			./srcs/utils/ft_split_in_2.c\
			./srcs/utils/ft_string_tab_utils.c\
			./srcs/utils/ft_string_utils.c\
			./srcs/utils/ft_is_unsigned_int.c
OBJ			=$(SRC:%.c=%.o)
EXEC		=rush-02
INCLUDE_HEAD=-I ./includes/boot\
			-I ./includes/core\
			-I ./includes/utils

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_HEAD) -o $@ -c $^ -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
