CFLAGS=-g3 #-Wall -Werror
CC=gcc
OUT=libdbm.so

%.o: src/%.c
	$(CC) $(CFLAGS) -fPIC -c $<

all: example.o libdbm.so
	$(CC) $(CFLAGS) -L./ -o example example.o -ldbm

libdbm.so: dbm.o
	$(CC) $(CFLAGS) -fPIC -shared -o $(OUT) $^

clean:
	rm *.o
	rm *.so
