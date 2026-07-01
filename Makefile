# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/18 12:43:32 by kjurkows          #+#    #+#              #
#    Updated: 2026/07/01 17:13:23 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ft_printf-test

CXX				=	g++
CXXFLAGS		=	-std=c++17

FT_PRINTF_DIR	=	./ft_printf
SRCS_DIR		=	./srcs
BIN_DIR			=	./bin
OBJS_DIR		=	./build

LIBFTPRINTF		=	$(FT_PRINTF_DIR)/libftprintf.a
GTEST_FLAGS		=	-lgtest -lpthread
INCLUDES		=	-I$(FT_PRINTF_DIR)/includes

SRCS		=	$(wildcard $(SRCS_DIR)/*.cpp)
OBJS		=	$(patsubst $(SRCS_DIR)/%.cpp, $(OBJS_DIR)/%.o, $(SRCS))
MAIN_OBJ	=	$(OBJS_DIR)/_main.o

RM			=	rm -rf

RED			=	\033[;31m
GREEN		=	\033[;32m
YELLOW		=	\033[;33m
BLUE		=	\033[;34m
MAGENTA		=	\033[;35m
CYAN		=	\033[;36m
RESET		=	\033[0m
POSITION	=	\033[2K\r

all:	$(NAME)
	@echo "$(GREEN)$(NAME) is ready to use.$(RESET)"

$(NAME):	$(LIBFTPRINTF) $(OBJS) | $(BIN_DIR)
	@echo "$(BLUE)Creating $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -L$(FT_PRINTF_DIR) -lftprintf $(GTEST_FLAGS) -o $(BIN_DIR)/$(NAME)
	@echo "$(GREEN)$(NAME) has been created successfully!$(RESET)"

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@echo -n "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled $< successfully!$(RESET)"

$(LIBFTPRINTF):
	@if [ ! -d $(FT_PRINTF_DIR) ]; then echo "$(RED)Error: ft_printf directory not found!$(RESET)"; exit 1; fi
	@echo "$(BLUE)Building ft_printf...$(RESET)"
	@make -C $(FT_PRINTF_DIR)
	@echo "$(GREEN)ft_printf has been built successfully!$(RESET)"

$(BIN_DIR) $(OBJS_DIR):
	@mkdir -p $@

clean:
	@$(RM) $(OBJS_DIR)
	@if [ -d $(FT_PRINTF_DIR) ]; then make -C $(FT_PRINTF_DIR) clean; fi
	@echo "$(RED)Cleaned object files.$(RESET)"

fclean:	clean
	@$(RM) $(BIN_DIR)
	@if [ -d $(FT_PRINTF_DIR) ]; then make -C $(FT_PRINTF_DIR) fclean; fi
	@echo "$(RED)Fully cleaned all generated files.$(RESET)"

re:	fclean all
	@echo "$(GREEN)Rebuild complete!$(RESET)"

.PHONY: all clean fclean re
