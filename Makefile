
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = 	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\

SRCS_BONUS = 

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

$(NAME): 	$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJS) $(OBJS_BONUS)
				ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
				rm -f $(OBJS) $(OBJS_BONUS)

fclean: 	clean
				rm -f $(NAME) $(OBJS_BONUS)

re:			fclean $(NAME)

re_bonus:	fclean bonus

.PHONY = all bonus clean fclean re bonus re_bonus