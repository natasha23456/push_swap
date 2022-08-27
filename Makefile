NAME	= push_swap.a
CC		= clang
CFLAGS	= -Wall -Wextra -Werror -gdwarf-4 -g3

INC		:= include

DIRS	:= libft ft_printf push_swap .
OBJDIR	:= objects
SRC		:= $(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))
OBS		:= $(patsubst %.c, %.o, $(SRC))

all: $(NAME)
$(NAME): $(OBS)
	ar -rcs $(NAME) $(OBS)

$(OBJDIR)/%.o: $(DIRS)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(OBJDIR):
	mkdir -p $@

clean:
	$(RM) $(OBS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
