##
## EPITECH PROJECT, 2020
## TESTS
## File description:
## MAKEFILE
##

NAME 	= 	critests

CC		= 	gcc
LD		=	$(CC)

PRINT		=	@echo -e
RM			=	@rm -f

ADD_COVERAGE	=	'CFLAGS	+=	--coverage'
ADD_LCRITERION	=	'LDLIBS	+=	-lcriterion'

ROOT_PATH		=	../
I_PATH			=	include/
SOURCE_PATH		=	$(ROOT_PATH)sources/
SOURCE_I_PATH	=	$(ROOT_PATH)$(I_PATH)

override CFLAGS	    +=	-W -Wall -Wextra -Wextra -I./$(I_PATH) -I./$(SOURCE_I_PATH) --coverage
override LDFLAGS    += 	-L./$(ROOT_PATH)
override LDLIBS     +=	-lcriterion -lmyprintf

TEST_SRC		=	sources/
REC_FUNC		=	generic/

SRC 	= 	$(TEST_SRC)t_hello_world.c		\
			$(REC_FUNC)redirect.c

OBJ 	= 	$(SRC:.c=.o)

$(NAME): $(OBJ)
	$(PRINT) "\n------->\tCOMPILED TESTS SRC DEPENDECIES.\n"
	@$(MAKE) -C $(SOURCE_PATH) $(ADD_COVERAGE) $(ADD_LCRITERION)
	$(LD) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)
	$(PRINT) "\n------->\tIT COMPILED TESTS SRC DEPENDECIES.\n"
	$(PRINT) "\n\n"
	./$(NAME)
	$(PRINT) "\n\n"

all: $(NAME)

clean:
	$(PRINT) "\n------->\tREMOVE TESTS TMP FILES\n"
	$(RM) $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	$(PRINT) "------->\tREMOVE TESTS\n"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re