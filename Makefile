# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 21:06:32 by mabbas            #+#    #+#              #
#    Updated: 2022/08/10 12:21:56 by mabbas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = push_swap

#define compiler and flags for Debugger

CC 		= gcc
DEBUG ?= 0
ifeq ($(DEBUG),1)
    CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address
else
	CFLAGS	= -Wall -Wextra -Werror
endif
# Including the directories 
HEADER  = -I includes -I libft
libft   = ./libft/

SRCDIR	= src
SRCS	:= $(wildcard $(SRCDIR)/*.c)

OBJS	:= $(wildcard $(SRCDIR)/*.c)
OBJS_ 	= $(SRCS:.c=.o)
OBJS	= $(subst $(SRCDIR),$(OBJDIR),$(OBJS_))

DDEBUG  = 
SUBM_COND := $(shell find libft -type f)


# Color Codes 

NC		:= \033[0m
B_RED	:= \033[1;31m
RED 	:= \033[0;31m
B_GREEN	:= \033[1;32m
GREEN 	:= \033[0;32m
B_BLUE 	:= \033[1;34m
BLUE 	:= \033[0;34m
PURPLE	:= \033[0;35m
WHCOLOR	:= \033[0;40m

##Check for Linux and run Valgrind when debugger on

UNAME = $(shell uname -s)

ifeq ($(UNAME),Linux)
	VALGRIND = valgrind -q --leak-check=full --track-origin=yes
endif

# Initialialize Submodule
ifeq ($(SUBM_COND),)
SUBM_SWITCH = submodule
else
SUBM_SWITCH = 
endif

all: $(SUBM_STATE) libft banner $(NAME)

submodule:
	@git submodule init
	@git submodule update

%o : %.c
	@echo "$(B_BLUE)Compiling: $(BLUE)$(notdir $<) $(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

libft:
	@echo "____!!!$(BLUE)----- Compiling Libft------$(NC)"
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -C $(LIBFT) bonus
	
# This is stupid banner shit displaying
banner:
	@@echo "$(GREEN)_!!!----- Compiling Push Swap------!!!_$(NC)" 
	@say -v Alex Compilation in Process 
# Making it executable

$(NAME): banner $(OBJS)
	@$(CC) $(OBJS) -g $(CFLAGS) $(HEADER) $(LIBFT) libft.a $(DEBUG) -o $(NAME)
	@say Have you summoned me?

# Clean up your trashes 

clean:
	@rm -f $(NAME)
	@say -v Fred "Time for Trashing"
	@echo "$(GREEN)♻️ ${B_RED} Trashing Away objects..... $(GREEN)♻️ "

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)♻️ ${B_RED} Trashing Away all objects and library...."
	
re: fclean all

.phony: all libft clean fclean submodule