#Makefile Ejercicio 28

All: HelloWorld.c
	gcc -fopenmp HelloWorld.c -o HelloWorld

	./HelloWorld


