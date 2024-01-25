 .PHONY:					all $(NAME) clear mkbuild clear clean fclean re sanitize

RED			            = \033[1;31m
GREEN					= \033[1;32m
PURPLE					= \033[1;35m
BLUE			        = \033[0;36m
EOC						= \033[0m
BG_RED	 				= \033[41m
BG_GREEN 				= \033[42m
BG_BLUE 				= \033[46m

NAME					= array

BUILD_DIR				= build/

HEADER_DIR				= header
HEADER_FILES			= Array.hpp
HEADER					= $(addprefix $(HEADER_DIR)/,$(HEADER_FILES))

DIR						= src/
SRC						= main.cpp	

OBJECTS					= $(SRC:%.cpp=$(BUILD_DIR)%.o)

GCC						= c++
CFLAGS					= -Wall -Werror -Wextra -std=c++98
SANITIZE				= $(CFLAGS) -g3 -fsanitize=address

RM 						= rm -rf

$(BUILD_DIR)%.o: 		$(DIR)%.cpp $(HEADER) Makefile
						@mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I$(HEADER_DIR) -I/usr/include -c $< -o $@
						@echo "$(BG_BLUE)[CREATE]$( ) $@"


all: 					mkbuild $(HEADER_DIR) $(NAME)

mkbuild:
						@mkdir -p build

init:
						@mkdir -p $(HEADER_DIR)
						@mkdir -p $(DIR)
						@touch $(DIR)main.cpp

$(NAME): 				$(OBJECTS)
						$(GCC) $(OBJECTS) -o $(NAME)
						@echo "$(BG_GREEN) ➤  $(NAME) is ready !$(EOC)"

sanit :					$(OBJECTS)
						$(GCC) $(SANITIZE) $(OBJECTS) -o $(NAME)

clean:
						@${RM} $(OBJECTS)
						@echo "$(BG_RED)[CLEAN DONE] $(EOC)"

fclean:					clean
						@${RM} ${NAME}
						@${RM} $(BUILD_DIR)
						@echo "$(BG_RED)[FCLEAN DONE] $(EOC)"

re:						fclean all