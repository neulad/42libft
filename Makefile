NAME := libft.a

SRC := ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

BONUS := ft_lstadd_back.c \
	ft_lstclear.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstlast.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstiter.c \
	ft_lstmap.c \

SRC_OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
CCFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

all: $(NAME)
$(NAME): $(SRC_OBJS)
	@$(AR) $@ $^
%.o: %.c
	@$(CC) $(CCFLAGS) -c $^ -o $@

.PHONY: all clean fclean re bonus
bonus: $(SRC_OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS) $(BONUS_OBJS)
clean:
	@$(RM) $(SRC_OBJS) $(BONUS_OBJS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all
