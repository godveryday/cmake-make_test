CC = gcc
TARGET = result
OBJS = main.o two.o three.o

#CFLAGS = -Wall
#LDFLAGS = -lc


all: $(TARGET)

result: $(OBJS)
	$(CC) -o $@ $^

main.o:
	$(CC) -c main.c

two.o:
	$(CC) -c two.c 

three.o:
	$(CC) -c three.c

# .c.o:
#	$(CC) -c -o $@ $<

clean:
	rm *.o $(TARGET)

echo:
	@echo "hello This is tutorial for makefile"