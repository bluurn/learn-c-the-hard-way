FLAGS=-Wall -g 
all : clean ex1/ex1 ex3/ex3 ex5/ex5 ex6/ex6 ex7/ex7 ex8/ex8 ex9/ex9 ex10/ex10 ex14/ex14 ex15/ex15 ex16/ex16 \
	ext16/ext16-plain ex17/ex17

clean:
			rm -rf ex1/ex1 ex1/ex1.dSYM
			rm -rf ex3/ex3 ex2/ex2.dSYM
			rm -rf ex5/ex5 ex5/ex5.dSYM
			rm -rf ex6/ex6 ex6/ex6.dSYM
			rm -rf ex7/ex7 ex7/ex7.dSYM
			rm -rf ex8/ex8 ex8/ex8.dSYM
			rm -rf ex9/ex9 ex9/ex9.dSYM
			rm -rf ex10/ex10 ex10/ex10.dSYM
			rm -rf ex14/ex14 ex14/ex14.dSYM
			rm -rf ex15/ex15 ex15/ex15.dSYM
			rm -rf ex16/ex16 ex16/ex16.dSYM ex16/ex16-plain.dSYM ext16/ex16-plain
			rm -rf ex17/ex17 ex17/ex17.dSYM


.PHONY: all clean
