CC = gcc
CFLAGS = -Wall

all: main.exe

main.exe: main.c
	$(CC) $(CFLAGS) -o main.exe main.c

clean:
	rm -f main.exe
