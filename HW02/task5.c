#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[]) {

if (argc==2) {
int n=atoi(argv[1]);
if (n<1 || n > 99){
printf("Input n must be: 0<n<100 \n");
}
else {
int *StoreArray;
int array[n+1];

StoreArray = (int *)malloc((n+1) * sizeof(int));

if(StoreArray != NULL){
printf("---dynamic memory is allocated---");
int i;
for (i=0;i<n+1;i++){
array[i]=n-i;
printf("\narray[%d]: %d ",i,array[i]);}
printf("\n");

// c
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
qsort(array, n+1 , sizeof(int), compare);
for (i=0;i<n+1;i++){
printf("sorted array[%d]: %d \n",i,array[i]);
}
printf("outputT5:");
outputT5(array,n+1);
printf("\n");
free(StoreArray);
printf("---dynamic memory is freed--- \n");
}
else if (StoreArray == NULL)
printf("dynamic memory is not allocated");
}
}
}