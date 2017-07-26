/*n=numRows
Δ=2n-2    1                           2n-1                         4n-3
Δ=        2                     2n-2  2n                    4n-4   4n-2
Δ=        3               2n-3        2n+1              4n-5       .
Δ=        .           .               .               .            .
Δ=        .       n+2                 .           3n               .
Δ=        n-1 n+1                     3n-3    3n-1                 5n-5
Δ=2n-2    n                           3n-2                         5n-4
*/

import java.lang.StringBuilder;
public class Solution {
    
    public String convert(String s, int numRows) {

    	int len = s.length();
    	int step = 2*numRows-2;

    	StringBuilder result = new StringBuilder();
    	
    	//first row
    	for(int i=0;i<len;i+=step)
    		result.append(s.charAt(i));

    	for(int i=2;i<numRows;i++){
    		int backward = 2*(i-1);
    		result.append(s.charAt(i-1));
    		int step2 = step - backward;
    		int next = i + step2;
    		boolean count = true;
    		while(next<=len){
    			if(count){
    				result.append(s.charAt(next-1));
    				next+=backward; 
    				count = false;
    			}
    			else{
    				result.append(s.charAt(next-1));
    				next+=step2;
    				count = true;
    			}
    		}

    	}


    	//last row
    	for(int i=numRows-1;i<len;i+=step)
    		result.append(s.charAt(i));

    	return result.toString();
        
    }

    public static void main(String[] args){
    	Solution s = new Solution();

    	System.out.println("Result: " + s.convert(args[0],Integer.parseInt(args[1])));
    }

}