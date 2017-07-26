import java.lang.StringBuilder;
public class Solution {
    public int reverse(int x) {
        
        StringBuilder s;
        if(x>=0)
        	s = new StringBuilder(Integer.toString(x));
        else
        	s = new StringBuilder(Integer.toString(-x));

        long tmp = Long.parseLong(s.reverse().toString());
        if(tmp>2147483647 || tmp < -2147483648)
        	return 0;
        else{
        	if(x>0) return (int)tmp;
        	else return -(int)tmp;
        }

    }

    public static void main(String[] args){

    	Solution test = new Solution();
    	int input = Integer.parseInt(args[0]);
    	System.out.println("Result: " + test.reverse(input));
    }
}