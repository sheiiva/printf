##
## EPITECH PROJECT, 2020
## PRINTF MAKEFILE
## File description:
## Create my_printf.a
##

PRINT		=	@echo -e
RM          =   @rm -f

ROOT	= ../

NAME	= $(ROOT)libmyprintf.a

INCLUDE_PATH		= $(ROOT)include
VA_FUNCTION_PATH	= va_functions/


override CFLAGS 	+=	-W -Wall -Werror -Wextra -I$(INCLUDE_PATH)

SRC	=	$(VA_FUNCTION_PATH)va_putstr.c		\
		my_printf.c							\
		my_putchar.c						\
		my_putstr.c							\
		my_strlen.c

OBJ	= $(SRC:.c=.o)


$(NAME): $(OBJ)
	$(PRINT) "\n------->\tCOMPILED SRC DEPENDENCIES.\n\nLET'S LINK IT ALL:\n"
	ar rc $(NAME) $(OBJ)
	$(PRINT) "\n------->\tCONGRATS !\n"

all: $(NAME)

clean:
	$(PRINT) "\n------->\tREMOVE OBJECT FILES\n"
	$(RM) $(OBJ)

fclean: clean
	$(PRINT) "------->\tREMOVE BINARY\n"
	$(RM) $(NAME)

re: fclean all

.PHONY: all tests clean fclean re