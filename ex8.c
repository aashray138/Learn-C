#include <stdio.h>


int main (int argc, char *argv[]) {

	int i = 0 ;

	if (argc == 1) {
	printf("Only one argument. Suck... \n");
	} else {
		for (i =0 ; i < argc; i++){
			printf("%s" , argv[i]);
		}
	}
	
	return 0;
}