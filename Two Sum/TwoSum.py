class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = dict(zip(nums,[x for x in range(len(nums))]))
        for i in range(len(nums)):
            index = dic.get((target-nums[i]))
            if index is not None and index != i:
                return [i,index]


if __name__ == "__main__":
    nums = [3,2,4]
    target = 6
    x = Solution()
    result = x.twoSum(nums, target)
    print(result)