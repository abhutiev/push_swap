PROJECT_NAME = push_swap

ROOT = $(CURDIR)

BINFOLDER = ${ROOT}/bin

SRC = *.c

all:
	gcc ${SRC}

clean:

fclean:
	rm -rf ${BINFOLDER}/${PROJECT_NAME}