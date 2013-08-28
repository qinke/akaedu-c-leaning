# CC =  arm-linux-gcc
  CC = gcc
#  TEST := $(CC)
#  TEST = $(CC)
  CC = cc
#   TEST += $(CC)
    TEST ?= $(CC)
#  TEST:=$(TEST)     $(CC)
# CC = arn-gcc


all: main
	echo ok,finished!
	echo $(TEST)

#main: main.o add.o sub.o
#	echo target : $@
#	echo leftmost : $<
#	echo total : $^
#	echo newest : $?
#	$(CC) main.o add.o sub.o -o main

main: head.h 
main: add.o sub.o main.o
	$(CC) -O2 $^ -o $@

%.o: %.c
	$(CC) -g -c $< -o $@

main.o: main.c head.h head2.h head3.h
	$(CC) -c main.c

%:
	echo only for $@

#main.o: main.c
#	$(CC) -O0 -c $< -o $@


add.o: add.c
	$(CC) -c add.c

sub.o: sub.c
	$(CC) -c sub.c

tmp:
	$(CC) NULL.c
run:
	./a.out

clean:
	echo "cleanning project"
	rm main *.o
	echo "clean completed"

.PHONY:clean
