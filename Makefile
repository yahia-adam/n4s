NAME = ia

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(SRC_DIR)/input_reader.c \
       $(SRC_DIR)/main_ai_logic.c \
       $(SRC_DIR)/string_parser.c \
       $(SRC_DIR)/float_converter.c \
       $(SRC_DIR)/utility_functions.c \
       $(SRC_DIR)/steering_calculator.c \
       $(SRC_DIR)/end_detector.c \
       $(SRC_DIR)/command_executor.c

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I include
LDFLAGS =

RM = rm -f
MKDIR = mkdir -p

GREEN = \033[0;32m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@ $(LDFLAGS)
	@echo "$(GREEN)Compilation successful. Executable '$(NAME)' created.$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(MKDIR) $(dir $@)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(GREEN)Object files cleaned.$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)Executable '$(NAME)' removed.$(RESET)"

re: fclean all