#Makefile Ejercicio 28

All: HelloWorld.c
	mpicc HelloWorld.c -o HelloWorld
	mpirun -np 4 ./HelloWorld


