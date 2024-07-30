CC=gcc
SRC=main.c
TARGET=calculator

all:
	$(CC) $(SRC) -o $(TARGET)
