#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {

	if (argc != 1) {
		unsigned char i = 0;
		char* StoreAdress;
		StoreAdress = argv[1];

		while (StoreAdress[i+1] != '\0' && i<255) {
			i++;		}
			outputT1(i+1);
	}
}