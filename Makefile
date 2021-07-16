OBJECTS = $(wildcard *.c)
CC = gcc
CFLAGS = -Wall -Werror
TARGET = aboutMe

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
