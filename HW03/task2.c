#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void main() {
	double Array[1000000];
	double* StoreArray;
	double c[1000];
	int i;
	int j;
	double norm2=0;
	clock_t start, end;
	double cpu_time_used;

	start = clock();
	
	StoreArray = (double *)malloc(1000000* sizeof(double));
	if (StoreArray == NULL)
		printf("Memory NOT allocated \n");

	randomT2(&Array);

	for (i=0;i<1000;i++){
		c[i]=0;
		for (j=0;j<1000;j+=2){
			c[i] += Array[j+1000*i]*0.5;
		}
		for (j=0;j>999;j+=2){
			c[i] += -Array[j+1000*i]*0.5;
		}
		norm2+=c[i]*c[i];
	}
	norm2=sqrt(norm2);

	free(StoreArray);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	
	outputT2(norm2,cpu_time_used);
	
}