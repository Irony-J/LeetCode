#include <stdio.h>
#include <stdlib.h>
static inline double median_num(int* num,int size){
	if(size%2==1)
		return (double)num[size/2];
	else
		return (double)(num[size/2] + num[size/2-1])/2.0;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    

		if(nums1Size == 1 && nums2Size == 1) return (double)(nums1[0]+nums2[0])/2;


		if(nums1Size == 0)
			return median_num(nums2,nums2Size);
		else if(nums2Size == 0)
			return median_num(nums1,nums1Size);

		int total = nums1Size + nums2Size;
		int median = total/2 + 1;
		int arr[median+1];

		printf("median: %d\n",median);

		int i = -1,j = -1;
		int step = 0;

    	while(step < median){

    		if( ((i<nums1Size-1)&&(nums1[i+1] < nums2[j+1])) || (j==nums2Size-1) \
    		 || ((nums1[i+1] == nums2[j+1]) && i<j))
    		{	
    			arr[step++] = nums1[++i];
    		}
    		else{
    			j++;
    			arr[step++] = nums2[++j];
    		} 

    	}

    	if(total % 2 == 1)
    		return arr[step-1];
    	else
    		return (double)(arr[step-2]+arr[step-1])/2.0;

}

int main(){

	int a[3] = {1};
	int b[3] = {2,3,4};

	printf("result: %lf\n",findMedianSortedArrays(a,1,b,3));
}