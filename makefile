all: a.out

a.out:
	g++ -std=c++11  src/app.cpp test/test.cpp -o a.out

test: a.out
	./a.out -s -d -t