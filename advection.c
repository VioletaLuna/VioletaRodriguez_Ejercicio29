#include<stdio.h>
#include<omp.h>


int main(int argc, char ** argv)
{	
	double delta = 0.05;
	double L = 4.0;
	double N = (L/delta) + 1;
	double* x = malloc(N*sizeof(double));
	double* u = malloc(N*sizeod(double));
	
	
	#pragma omp parallel for
	{
	int i;
	for(i=0; i<N i++)
	{
		x[i] = i*delta;
		if (X[i] < 2.0)
		{
			u[i] = 1.0;
		}
		
	}
