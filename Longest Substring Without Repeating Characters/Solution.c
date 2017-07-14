#include <string.h>
#include <stdlib.h>

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })


int lengthOfLongestSubstring(char* s) {
    
	if(s==NULL) return 0;

	int len = strlen(s);
	if(len == 0) return 0;
	if(len == 1) return 1;

	int* max = (int*)malloc(sizeof(int)*len);
	for(int i=0;i<len;i++)
		max[i] = 0;
	max[len - 1] = 1;

	int P[128];
	for(int i=0;i<128;i++)
		P[i] = 0;
		
	P[s[len-1]] = len - 1;
	int result = -1;

	for(int i = len -2; i>=0; i--){
		max[i] = (P[s[i]]==0) ? (max[i+1] + 1) : (min(P[s[i]] - i, max[i+1]+1));
		if(result < max[i])
			result = max[i];
		P[s[i]] = i;
	}

	return result;
}

int main(){
	
}