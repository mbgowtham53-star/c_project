CC = gcc
CFLAGS = -Wall -Werror -g

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = output

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ) $(TARGET)

