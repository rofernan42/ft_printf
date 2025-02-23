# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 15:44:33 by rofernan          #+#    #+#              #
#    Updated: 2019/11/26 16:55:06 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				=	libftprintf.a

LIB_PATH			=	./libft
SRCS_PATH			=	./srcs
INC_PATH			=	./includes
OBJS_PATH			=	./objs
OBJSLIB_PATH		=	./objs

LIB_NAME			=	ft_strlen.c					\
						ft_atoi.c					\
						ft_strdup.c					\
						ft_itoa.c					\
						ft_putchar_fd.c				\
						ft_putstr_fd.c				\
						ft_strndup.c				\
						ft_itoa_uns.c				\
						ft_convert_base.c			\

SRCS_NAME			=	case_flags.c				\
						check_elem.c				\
						conv_hex.c					\
						conv_nbr.c					\
						conv_str.c					\
						conversion.c				\
						count_elems.c				\
						find_elem.c					\
						init_flags.c				\
						init_free_var.c				\
						print_flags.c				\
						print_types.c				\
						ft_printf.c					\

INC_NAME			=	libftprintf.h

OBJS_NAME			=	$(SRCS_NAME:.c=.o)
OBJSLIB_NAME		=	$(LIB_NAME:.c=.o)

LIB					=	$(addprefix $(LIB_PATH)/, $(LIB_NAME))
SRCS				=	$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
INC					=	$(addprefix $(INC_PATH)/, $(INC_NAME))
OBJS				=	$(addprefix $(OBJS_PATH)/, $(OBJS_NAME))
OBJSLIB				=	$(addprefix $(OBJSLIB_PATH)/, $(OBJSLIB_NAME))

CC					=	gcc

CFLAGS				=	-Wall -Wextra -Werror -I./includes

all:					$(NAME)

$(NAME):				$(OBJS) $(OBJSLIB)
						ar rc $(NAME) $(OBJS) $(OBJSLIB)
						ranlib $(NAME)

$(OBJS_PATH)/%.o:		$(SRCS_PATH)/%.c
						@mkdir $(OBJS_PATH) 2> /dev/null || true
						@$(CC) -o $@ -c $<

$(OBJSLIB_PATH)/%.o:	$(LIB_PATH)/%.c
						@mkdir $(OBJSLIB_PATH) 2> /dev/null || true
						@$(CC) -o $@ -c $<

clean:
						rm -rf $(OBJS) $(OBJSLIB)

fclean:					clean
						rm -rf ./objs $(NAME)

re:						fclean all

.PHONY:					clean fclean re all bonus
