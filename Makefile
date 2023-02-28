NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC = push_swap.h \

SRC = main.c  ft_error.c ft_get_pos.c\
	linked_list_utils.c\
	string_utils.c\
	utils.c ft_split.c\
	rules_s.c rules_r.c rules_rr.c\
	check_d.c check_s.c\
	ft_get_sorted.c sort_three.c sort_four.c sort_five.c\
	sort_tow_hundered.c push_it_back.c\
	ft_find_index.c ft_clear.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c $(INC)
	@${CC} ${CFLAGS} -c -o $@ $<
	@printf "[compiling %-30s] \r"  ${notdir $@}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT : all $(NAME) clean fclean