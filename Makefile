PROJECT_NAME = push_swap

ROOT = $(CURDIR)

BINFOLDER = ${ROOT}/bin

SRC = src/*.c

all:
	gcc ${SRC}

clean:

fclean:
	rm -rf ${BINFOLDER}/${PROJECT_NAME}