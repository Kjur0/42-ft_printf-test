# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/18 12:43:32 by kjurkows          #+#    #+#              #
#    Updated: 2026/07/03 16:20:38 by kjurkows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ft_printf-test

CXX				=	g++
CXXFLAGS		=	-std=c++17 -Wall -Wextra -Werror

FT_PRINTF_DIR	=	./ft_printf
FT_PRINTF_INC	=	$(FT_PRINTF_DIR)/includes
SRCS_DIR		=	./srcs
OBJS_DIR		=	./build

LIBFTPRINTF		=	$(FT_PRINTF_DIR)/libftprintf.a

GTEST_FLAGS		=	-lgtest -lpthread
INCLUDES		=	-I$(FT_PRINTF_INC) -I$(FT_PRINTF_DIR)/libft

SRCS		=	%c.cpp \
				%s.cpp \
				%p.cpp \
				%d%i.cpp \
				%u.cpp \
				%x%X.cpp \
				%%.cpp
BONUS_SRCS	=	$(SRCS:%.cpp=%_bonus.cpp)
OBJS		=	$(SRCS:%.cpp=$(OBJS_DIR)/%.o)
BONUS_OBJS	=	$(BONUS_SRCS:%.cpp=$(OBJS_DIR)/%.o)
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

all: $(OBJS) $(MAIN_OBJ)
	@echo -n "$(CYAN)Compiling libftprintf...$(RESET)"
	@make -C $(FT_PRINTF_DIR) > /dev/null
	@echo "$(POSITION)$(GREEN)Compiled libftprintf successfully!$(RESET)"
	@echo -n "$(CYAN)Compiling $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $^ $(LIBFTPRINTF) $(GTEST_FLAGS)
	@echo "$(POSITION)$(GREEN)$(NAME) compiled successfully!$(RESET)"

bonus: $(OBJS) $(BONUS_OBJS) $(MAIN_OBJ)
	@echo -n "$(CYAN)Compiling libftprintf with bonus...$(RESET)"
	@make -C $(FT_PRINTF_DIR) bonus > /dev/null
	@echo "$(POSITION)$(GREEN)Compiled libftprintf with bonus successfully!$(RESET)"
	@echo -n "$(CYAN)Compiling $(NAME) with bonus...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $^ $(LIBFTPRINTF) $(GTEST_FLAGS)
	@echo "$(POSITION)$(GREEN)$(NAME) with bonus compiled successfully!$(RESET)"

$(MAIN_OBJ): $(SRCS_DIR)/_main.cpp | $(OBJS_DIR)
	@echo -n "$(CYAN)Compiling _main...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled _main successfully!$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@echo -n "$(CYAN)Compiling $(basename $(notdir $<))...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(POSITION)$(GREEN)Compiled $(basename $(notdir $<)) successfully!$(RESET)"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	@echo -n "$(CYAN)Cleaning object files...$(RESET)"
	@$(RM) $(OBJS_DIR)
	@make -C $(FT_PRINTF_DIR) clean
	@echo "$(POSITION)$(GREEN)Cleaned object files successfully!$(RESET)"

fclean:
	@echo -n "$(CYAN)Cleaning $(NAME)...$(RESET)"
	@$(RM) $(NAME)
	@make -C $(FT_PRINTF_DIR) fclean
	@echo "$(POSITION)$(GREEN)Cleaned $(NAME) successfully!$(RESET)"

re: fclean all

.PHONY: all bonus clean fclean re
