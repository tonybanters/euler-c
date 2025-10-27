CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -fsanitize=address -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)

.PHONY: all clean
