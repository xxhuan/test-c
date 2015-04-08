all: test1 test2 q_282

test1:test.c
	gcc test.c -o test1

test2:main.c increment.c negate.c
	gcc main.c increment.c negate.c -o test2

q_282:q_282.c
	gcc q_282.c -o q_282

clean:
	rm test1 test2
