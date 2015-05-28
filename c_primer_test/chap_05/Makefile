all: test1 count_1a bad_exp 5.8.2 5.8.4_1 5.8.4_2 5.8.5

test1:test1.c
	gcc test1.c -o test1

count_1a:count_1a.c
	gcc count_1a.c -o count_1a

bad_exp:bad_exp.c
	gcc -O2 bad_exp.c -o bad_exp

5.8.2:5.8.2.c
	gcc  5.8.2.c -o 5.8.2

5.8.4_1:5.8.4_1.c
	gcc  5.8.4_1.c -o 5.8.4_1

5.8.4_2:5.8.4_2.c
	gcc  5.8.4_2.c -o 5.8.4_2

5.8.5:5.8.5.c
	gcc -g 5.8.5.c -o  5.8.5

clean:
	rm test1 count_1a bad_exp 5.8.2 5.8.4_1 5.8.4_2 5.8.5
