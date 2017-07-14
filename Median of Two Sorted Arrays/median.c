#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    
		if(nums1Size == 1 && nums2Size == 1) return (double)(nums1[0]+nums2[0])/2;

		int total = nums1Size + nums2Size;
		int median = total/2 + 1;

		int i = -1,j = -1;
		int step = 0;

    	while(step < median){

    		if( ((i<nums1Size)&&(nums1[i+1] < nums2[j+1])) || (j==nums2Size-1)) i++;
			else j++;
			step++;

    	}

    	if(total % 2 == 1)
    		return (nums1[i]>nums[j]) ? nums1[i] : nums2[j];
    	else
    		return (double)(nums1[i] + nums2[j])/2.0;


}

int main(){
	
}