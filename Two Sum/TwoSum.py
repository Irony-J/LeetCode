class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = dict(zip([x for x in range(len(nums))],nums))
        for i in range(len(nums)):
            index = dic.get(9-i)
            if index is not None:
                return [i,index]


if __name__ == "main":
    nums = [2, 7, 11, 15]
    target = 9
    result = twoSum(nums, target)
    print(result)