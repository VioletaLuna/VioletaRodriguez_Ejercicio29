#Makefile Ejercicio 28

All: 12.3.c
	mpicc HelloWorld.c -o HelloWorld
	mpirun -np 4 ./HelloWorld


