CC = gcc
CFLAGS = -Wall -Werror

all: aboutMe

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

run: aboutMe
	./aboutMe

clean:
	rm -f aboutMe
