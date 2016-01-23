FLAGS=-Wall -g

all : clean ex1/ex1 ex3/ex3

clean:
			rm -rf ex1/ex1
			rm -rf ex3/ex3


.PHONY: all clean
