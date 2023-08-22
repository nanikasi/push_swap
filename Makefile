HEAD := src/libft/libft.h \
		src/importer.h
NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = src/libft/
OBJ_DIR = obj/
LIBRARY = src/libft/libft.a
LIBRARY_OBJS = src/libft/objs

SRCS =  src/main.c \
		src/error_handle/is_dup.c \
		src/error_handle/is_valid.c \
		src/error_handle/put_error.c \
		src/stack_controller/actual_control/do_rarb.c \
		src/stack_controller/actual_control/do_rarrb.c \
		src/stack_controller/actual_control/do_rrarb.c \
		src/stack_controller/actual_control/do_rrarrb.c \
		src/stack_controller/calc_rotation/ab/rarb_b.c \
		src/stack_controller/calc_rotation/ab/rarrb_b.c \
		src/stack_controller/calc_rotation/ab/rrarb_b.c \
		src/stack_controller/calc_rotation/ab/rrarrb_b.c \
		src/stack_controller/calc_rotation/ba/rarb_a.c \
		src/stack_controller/calc_rotation/ba/rarrb_a.c \
		src/stack_controller/calc_rotation/ba/rrarb_a.c \
		src/stack_controller/calc_rotation/ba/rrarrb_a.c \
		src/stack_controller/calc_rotation/calc_rotate_count.c \
		src/stack_controller/operations/pa.c \
		src/stack_controller/operations/pb.c \
		src/stack_controller/operations/ra.c \
		src/stack_controller/operations/rb.c \
		src/stack_controller/operations/rr.c \
		src/stack_controller/operations/rra.c \
		src/stack_controller/operations/rrb.c \
		src/stack_controller/operations/rrr.c \
		src/stack_controller/operations/sa.c \
		src/stack_controller/operations/sb.c \
		src/stack_controller/operations/ss.c \
		src/stack_controller/sort/is_sorted.c \
		src/stack_controller/sort/sort_b_by_3.c \
		src/stack_controller/sort/sort_stack.c \
		src/stack_controller/sort/sort_three.c \
		src/stack_controller/create_stack.c \
		src/stack_controller/find_where_to_push.c \
		src/stack_controller/free_stack.c \
		src/stack_controller/get_index.c \
		src/stack_controller/get_last.c \
		src/stack_controller/get_stack_size.c \
		src/stack_controller/stack_from.c \
		src/stack_controller/stack_max.c \
		src/stack_controller/stack_min.c \
		src/stack_controller/utils/free_str.c

OBJS = ${SRCS:.c=.o}
PATH_OBJS = $(addprefix $(OBJS_DIR),$(OBJS))

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@
	@echo "Compiling $(<)."

$(LIBRARY):
	@make --directory src/libft
	@echo "libft.a is Ready."

$(NAME): $(LIBRARY) $(PATH_OBJS)
	@$(CC) -I $(HEAD) $(PATH_OBJS) $(LIBRARY) -o $(NAME)
	@echo "push swap is Ready."

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Removed library objs."
	@rm -rf $(LIBRARY_OBJS)
	@echo "Removed objs."

fclean: clean
	@rm -f $(LIBRARY)
	@echo "Removed library."
	@rm -f $(NAME)
	@echo "Removed push swap."

re: fclean all

.PHONY: all clean fclean re
