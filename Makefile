FLAGS=-Wall -g

all : clean ex1/ex1 ex3/ex3 ex5/ex5 ex6/ex6

clean:
			rm -rf ex1/ex1 ex1/ex1.dSYM
			rm -rf ex3/ex3 ex2/ex2.dSYM
			rm -rf ex5/ex5 ex5/ex5.dSYM
			rm -rf ex6/ex6 ex6/ex6.dSYM


.PHONY: all clean
