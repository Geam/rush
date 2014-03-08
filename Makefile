#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geam <>                                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/08 13:34:39 by geam              #+#    #+#              #
#    Updated: 2014/03/08 13:34:39 by geam             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CPATH = srcs
HPATH = includes
OPATH = obj
LIBPATH = libft

CC = /usr/bin/gcc
MKDIR = /bin/mkdir
RM = /bin/rm
CFLAGS = -Wall -Wextra -Werror -I $(HPATH) -I $(LIBPATH)/$(HPATH)
LDFLAGS = -L $(LIBPATH) -lft

NAME = puissance4
LIB = $(LIBPATH)/libft.a

SRC = ft_init_board.c \
	main.c

HFILES = $(patsubst %,$(HPATH)/%, $(HEADER))
CFILES = $(patsubst %,$(CPATH)/%, $(SRC))
OFILES = $(patsubst %.c,$(OPATH)/%.o, $(SRC))

all: $(OPATH) $(LIB) $(NAME)

$(NAME): $(OFILES)
	@echo "Building $(NAME)"
	@$(CC) $^ -o $@ $(LDFLAGS)

$(OPATH)/ft_init_board.o: srcs/ft_init_board.c libft/includes/libft.h \
 includes/ft_struct_data.h
	@echo "Creating file $@"
	@$(CC) -c $< -o $@ $(CFLAGS)

$(OPATH)/main.o: srcs/main.c libft/includes/libft.h includes/ft_struct_data.h \
 includes/ft_init_board.h
	@echo "Creating file $@"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@echo "Deletion of building files"
	@$(RM) -rf $(OPATH)

fclean: clean
	@echo "Deletion of $(NAME)"
	@$(RM) -f $(NAME)

re: fclean all

$(OPATH):
	@echo "Creation of building directory"
	@$(MKDIR) $(OPATH)

$(LIB):
	@make -C $(LIBPATH)

lib: $(LIB)

lib.clean:
	@make -C $(LIBPATH) clean

lib.fclean:
	@make -C $(LIBPATH) fclean

lib.re: lib.fclean lib
