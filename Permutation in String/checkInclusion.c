#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int compare(const void* s1, const void* s2){
	return strcmp((char*)s1,(char*)s2);
}

bool checkInclusion(char* s1, char* s2) {
    
    int len = strlen(s1);
    int len2 = strlen(s2);


    if(len2 < len)
    	return false;

    int size = sizeof(char);
    qsort(s1,len,size,compare);

    int start = 0;
    printf("s1:%s\n",s1);

    //if(len > 10){
    	while(start <= len2 - len){

    		s2 = backup;
    		int end = start + len - 1;
    		qsort(s2+start,len,size,compare);
    		printf("s2:%s\n",s2);
    		int k = 0;
    		int i = start;
    		for(;i <= end;i++){
    			if(s2[i] != s1[k]){
    				start = start + k + 1;
    				break;
    			}
    			k++;
    		}
    		//printf("here----\n");
    		printf("i:%d k:%d end:%d\n",i,k,end);
    		if(i==end+1 && s2[i-1] == s1[k-1])
    			return true;
    	}
    	
    	return false;
    //}

	//return false;
}

int main(int argc, char* argv[]){

	if(checkInclusion(argv[1],argv[2]))
		printf("True\n");
	else
		printf("False\n");

	return 0;
}