class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = dict(zip(nums,[x for x in range(len(nums))]))
        for i in range(len(nums)):
            index = dic.get((9-nums[i]))
            if index is not None:
                return [i,index]


if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    x = Solution()
    result = x.twoSum(nums, target)
    print(result)