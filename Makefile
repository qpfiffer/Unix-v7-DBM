CFLAGS=-O2 #-Wall -Werror -g3 -O2
CC=gcc
OUT=libdbm.so

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all: dbm.o
	$(CC) $(CFLAGS) -shared -o $(OUT) $^

clean:
	rm *.so
	rm *.o
