PROJECT_NAME = push_swap

ROOT = $(CURDIR)

BINFOLDER = ${ROOT}/bin

SRC = src/*.c

all:
	gcc ${SRC} -o ${PROJECT_NAME}

clean:

fclean:
	rm -rf ${PROJECT_NAME}