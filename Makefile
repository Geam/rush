#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/09 18:52:53 by frale-co          #+#    #+#              #
#    Updated: 2014/03/09 18:52:53 by frale-co         ###   ########.fr        #
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

HEADER = puissance4.h

SRC = ft_aff.c \
	ft_eval.c \
	ft_init_board.c \
	ft_minmax.c \
	ft_player.c \
	ft_start.c \
	ft_winner.c \
	main.c

HFILES = $(patsubst %,$(HPATH)/%, $(HEADER))
CFILES = $(patsubst %,$(CPATH)/%, $(SRC))
OFILES = $(patsubst %.c,$(OPATH)/%.o, $(SRC))

all: $(OPATH) $(LIB) $(NAME)

$(NAME): $(OFILES)
	@echo "Building $(NAME)"
	@$(CC) $(LDFLAGS) $^ -o $@

$(OPATH)/%.o: $(CPATH)/%.c $(HFILES)
	@echo "Creating file $@"
	@$(CC) $(CFLAGS) -c $< -o $@

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
