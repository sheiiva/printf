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
UTILS_PATH			= utils/
VA_FUNCTION_PATH	= va_functions/

override CFLAGS 	+=	-W -Wall -Werror -Wextra -I$(INCLUDE_PATH)

SRC	=	$(UTILS_PATH)my_realloc.c				\
		$(UTILS_PATH)my_revstr.c				\
		$(UTILS_PATH)my_stralloc.c				\
		$(UTILS_PATH)my_strlen.c				\
		$(VA_FUNCTION_PATH)va_putascii.c		\
		$(VA_FUNCTION_PATH)va_putbinary.c		\
		$(VA_FUNCTION_PATH)va_putpointer.c		\
		$(VA_FUNCTION_PATH)va_putchar.c			\
		$(VA_FUNCTION_PATH)va_putoctal.c		\
		$(VA_FUNCTION_PATH)va_putnbr.c			\
		$(VA_FUNCTION_PATH)va_putstr.c			\
		$(VA_FUNCTION_PATH)va_puthexa.c			\
		$(VA_FUNCTION_PATH)va_puthexa_upper.c	\
		my_printf.c								\
		my_putchar.c							\
		my_putnbr_base.c						\
		my_putnbr.c								\
		my_putstr.c								\

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