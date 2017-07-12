import java.util.*;

public class TwoSum_Map{

	public static int[] twoSum(int[] nums, int target){
		HashMap<Integer,Integer> map1 = new HashMap<Integer,Integer>();
		
		for(int i=0;i<nums.length;i++)
			map1.put(nums[i],i);

		for(Map.Entry entry : map1.entrySet())
			System.out.println(entry.getKey() + ": " + entry.getValue());

		for(int i=0;i<nums.length;i++){
			int complement = target - nums[i];
			if(map1.containsKey(complement) && map1.get(complement)!=i)
				return new int[]{i,map1.get(complement)};
		}
		throw new IllegalArgumentException("No two sum solution");
	}

	public static void main(String[] args){

		//test
		System.out.printf("Enter the sum: ");
		Scanner scan = new Scanner(System.in);
		int target = scan.nextInt();
		scan.nextLine();
		System.out.printf("Enter the numbers: ");
		String[] input = scan.nextLine().split(" ");

		int[] nums = new int[input.length];
		for(int i=0;i<input.length;i++)
			nums[i] = Integer.parseInt(input[i]);

		try{
			int[] result = twoSum(nums,target);
			System.out.printf("%d %d\n",result[0],result[1]);
		}catch(IllegalArgumentException e){
			System.out.println(e.getMessage());
		}
		

	}
}