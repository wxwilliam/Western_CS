all:
	gcc  main.c datatype.c bstree.c matrix.c datatype.h bstree.h matrix.h -o mymatrix
clean:
	rm -rf *o mymatrix


