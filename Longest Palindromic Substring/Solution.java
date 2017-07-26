public class Solution {
    public static String longestPalindrome(String s) {
       
       int start = 0;
       int end = 0;

       for(int i=0;i<s.length();i++){
          
          int length1 = expand(s,i,i);
          int length2 = expand(s,i,i+1);
          int len = Math.max(length1,length2);
          
          if(len > end - start){

            end = i + len/2;
            start = i - (len-1)/2;
          }	
       }

       return s.substring(start,end+1);

    }

    public static int expand(String s,int L,int R){

    	while(L>=0 && R<s.length() && s.charAt(L) == s.charAt(R)){
    		L--; R++;
    	}
    	return R - L - 1;

    }

    public static void main(String[] args){

    	System.out.println("Result: " + longestPalindrome(args[0]));

    }
    
}