#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int compare(const void* s1, const void* s2){
	return strcmp((char*)s1,(char*)s2);
}

bool checkInclusion(char* s1, char* s2) {
    
	 

}

int main(int argc, char* argv[]){

	if(checkInclusion(argv[1],argv[2]))
		printf("True\n");
	else
		printf("False\n");

	return 0;
}