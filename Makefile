


SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memcpy.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		ft_lstlast_bonus.c

OBJS = $(SRCS:.c=.o)

OBJSB = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I./
RM = rm -f
AR = ar rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	${AR} $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) ${OBJSB}

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus : ${OBJSB}
	${AR} ${NAME} ${OBJSB}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re
