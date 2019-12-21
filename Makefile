CC=gcc
OBJECT_TXTFIND= txtfind.o
OBJECT_ISORT= isort.o
FLAGS= -Wall -c

all: txtfind isort
txtfind: $(OBJECT_TXTFIND)
	$(CC) -Wall -o txtfind $(OBJECT_TXTFIND)
isort: $(OBJECT_ISORT)
	$(CC) -Wall -o isort $(OBJECT_ISORT)

txtfind.o: txtfind.c
	$(CC) $(FLAGS) -fPIC -c txtfind.c
isort.o: isort.c
	$(CC) $(FLAGS) -fPIC -c isort.c

.PHONY: clean all
clean:
	rm -f *.o *.a txtfind isort a.out