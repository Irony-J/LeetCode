import java.util.Arrays;
public class Solution {
    public static String longestPalindrome(String s) {
        
        int len = 2 * s.length() - 1;
        int radius = (len-1)/2;

        char[] A = new char[len];

        int k = 0;
        int m = 0;
        for(m=0;m<s.length()-1;m++){
        	A[k] = s.charAt(m);
        	A[k+1] = ' ';
        	k+=2;
        }
        A[k] = s.charAt(m);

        while(radius>0){

        	int center = radius;
        	int end = len - radius - 1;
        	for(; center <= end; center++){
        		int i = 1;
        		for(; i<=radius; i++){
        			if(A[center-i]!= A[center+i])
        				break;
        		}
        		if(i==(radius+1) && A[center-i+1]==A[center+i-1]){
        			if(A[center-i+1]!=' ')
        				return s.substring((center-radius)/2,(center+radius)/2 + 1);
        			else
        				return s.substring((center-radius+1)/2,(center+radius)/2 + 1);
        		}

        	}

        	radius--;
        }

        return s.substring(0,1);
    }

    public static void main(String[] args){

    	System.out.println("Result: " + longestPalindrome(args[0]));
    }
}