##
## EPITECH PROJECT, 2020
## MAKEFILE
## File description:
## ROOT
##

SRC_PATH	=	./sources/
TST_PATH	=	./tests/

CLEAN		=	clean
FCLEAN		=	fclean

all:
	@$(MAKE) -C $(SRC_PATH)

clean:
	@$(MAKE) $(CLEAN) -C $(SRC_PATH)
	@$(MAKE) $(CLEAN) -C $(TST_PATH)

fclean:
	@$(MAKE) $(FCLEAN) -C $(SRC_PATH)
	@$(MAKE) $(FCLEAN) -C $(TST_PATH)

re: fclean all

tests_run: all
	@$(MAKE) -C $(TST_PATH)

.PHONY: all clean fclean re tests_run
