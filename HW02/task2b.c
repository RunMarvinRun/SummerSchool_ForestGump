#include <stdio.h>

void  main(int argc, char* argv[]) {

int counter;
if (argc==2) {
int a=atoi(argv[1]);
for (counter=0;counter<a+1;counter++){
outputT2(counter);
}
printf("\n");
}
else if (argc==1){
printf("Please give a command line argument \n");
}
else{
printf("Please give only one command line argument \n");
}
}