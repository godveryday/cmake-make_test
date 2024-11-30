CC = gcc
TARGET = main
OBJS = main.o can_init.o can_driver.o 


all: $(TARGET)

main: $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) -I include/
# $(CC) -o $@ $^


# .c .o:
#     $@ $<

main.o:
	$(CC) -c src/main.c -I include/

can_init.o:
	$(CC) -c src/can_init.c -I include/

can_driver.o:
	$(CC) -c src/can_driver.c -I include/


clean:
	rm -rf *.o main