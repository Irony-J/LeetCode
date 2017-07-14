import java.util.Scanner;
public class Solution {
    public static int lengthOfLongestSubstring(String s) {
            
        if(s==null) return 0;
        
        int[] A = new int[128];//contains whole 128 ascii characters
        int result = -1;
        int len = s.length();
        
        if(len == 1) return 1;
        if(len == 0) return 0;
        
        int[] max = new int[len];
        max[len-1] = 1;
        A[s.charAt(len-1)] = len-1;//last position

        for(int i=len-2;i>=0;i--){
            max[i] = (A[s.charAt(i)]==0) ? (max[i+1] + 1) : (Math.min(A[s.charAt(i)] - i,max[i+1]+1));
            if(result < max[i])
                result = max[i];
            A[s.charAt(i)] = i;//update last position
        }
        // for(int i : max)
        //     System.out.print(i + " ");

        return result;
    }

    //For Test
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter a string: ");
        String s = scan.nextLine();
        System.out.println("result is : " + lengthOfLongestSubstring(s));
    }
}