SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcmp.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_memchr.c ft_strrchr.c ft_itoa.c \
ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_atoi.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_memmove.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c ft_strnstr.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= $(SRCS:.c=.o)

OBJBONUS = $(BONUS:.c=.o)

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

$(NAME):	$(OBJS)
	ar rcs $@ $(OBJS)

bonus: ${OBJBONUS} 
	ar rcs ${NAME} $^ 

all:	$(NAME)

clean:
	$(RM) $(OBJS) ${OBJBONUS}

fclean:	clean
	$(RM) $(NAME)

re:	fclean all