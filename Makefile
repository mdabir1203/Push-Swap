# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 21:06:32 by mabbas            #+#    #+#              #
#    Updated: 2022/10/07 21:15:30 by mabbas           ###   ########.fr        #
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
HEADER  = -I Includes -I ./Includes/libft
LIBFT  = ./Includes/libft/

SRCS 	= 	./push_swap.c \
			./Algo_Operation_Util/ft_chunk_finder.c		\
			./Algo_Operation_Util/ft_limiters.c		\
			./Algo_Operation_Util/ft_partition.c			\
			./Algo_Operation_Util/ft_node_operations.c \
			./Argument_Parsing/Error_handlers.c			\
			./Argument_Parsing/stack_build.c		\
			./Sort_Algorithms/ft_small_sorter.c			\
			./Sort_Algorithms/ft_stack_b_sorter.c		\
			./Sort_Algorithms/Large_sort.c		\
			./stack_commands/pushing.c				\
			./stack_commands/rev_rotate.c	\
			./stack_commands/rotate.c		\
			./stack_commands/swapping.c		\
			./Stack_Indexing/stack_operation_handlers.c	\
			./Stack_Indexing/stack_sz_chk.c	

OBJS 	=  ${SRCS:.c=.o}
# Color Codes 

NC		:= \033[m
B_RED	:= \033[1;31m
RED 	:= \033[0;31m
B_GREEN	:= \033[1;32m
GREEN 	:= \033[0;33m
B_BLUE 	:= \033[1;34m
BLUE 	:= \033[0;34m
PURPLE	:= \033[0;35m
WHCOLOR	:= \033[0;40m

##Check for Linux and run Valgrind when debugger on

UNAME = $(shell uname -s)

ifeq ($(UNAME),Linux)
	VALGRIND = valgrind -q --leak-check=full --track-origin=yes
else 
	detected_OS := $(shell sh -c 'uname 2>/dev/null || echo Unknown')
endif

	
all: libft $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -g  $(HEADER) $(LIBFT)libft.a -o $(NAME)
	@say Have you summoned me?

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@

libft:
	@echo "____!!!$(BLUE)----- Compiling Libft------$(NC)"
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -C $(LIBFT) bonus

# Making it executable




# Clean up your trashes 

clean:
	@rm -f $(OBJS)
	@say -v Fred "Time for Trashing"
	@echo "$(GREEN)♻️ ${B_RED} Trashing Away objects..... $(GREEN)♻️ "
	@$(MAKE) -C $(LIBFT) fclean

fclean: clean
	@rm -f $(NAME) 
	@echo "$(GREEN)♻️ ${B_RED} Trashing Away all objects and library...."
	
re: fclean all

.phony: all libft clean fclean 