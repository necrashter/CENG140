CFLAGS=-Wall

all: linked_list.o test_linked_list

test_linked_list: linked_list.o

clean:
	rm -f linked_list.o
	rm -f test_linked_list
