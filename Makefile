all:
	mkdir build
	gcc -Wall -O0 -fprofile-arcs -ftest-coverage -o build/test_ci main.c

test:
	./build/test_ci
	LC_ALL=en gcov --branch-probabilities --branch-counts main.c -o .

clean:
	rm -rf build
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gcov
	rm -rf bw-output
