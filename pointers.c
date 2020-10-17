#include <stdio.h>

int main (int argc, char *argv[]){

int ages [] = {23,43,12,89,22};
char *names[] = {"Alan" , "Frank","Lisa", "Mary","Jyoti"};

// setup the pointer to the start of the arrays

int *cur_age = ages;
char ** cur_name = names;
n
int  i = 0;
int count = 5;

for (i = 0; i < count ; i++){
 printf("%s is %d years old.\n", *(cur_name+i) , *(cur_age + i));
}

printf("===\n");

//Pointers are just arrays
// This is same as fast as fast
for (i = 0; i < count ; i++){
 printf("%s is %d years old.\n", cur_name[i] , cur_age[i]);
}

printf("===\n");

//Complex way
for (cur_name = names, cur_age = ages;
		(cur_age - ages) < count ; cur_name++, cur_age++){
	printf("%s is %d years old.\n", *cur_name , *cur_age);
}

return 0;
}