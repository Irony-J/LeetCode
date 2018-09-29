class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        unique = set()
        i = 0
        j = 0
        max_len = 0
        while i < n and j < n:
            if s[j] not in unique:
                unique.add(s[j])
                j = j + 1
                max_len = max(max_len, j - i)
            else:
                unique.remove(s[i])
                i = i + 1


        return max_len

if __name__ == "__main__":
    s1 = "uqinntq"
    s2 = "pwwkew"
    s3 = "jxdlnaaij"
    s4 = "bprkpqlbtqpqphr"
    
    x = Solution()
    print(x.lengthOfLongestSubstring(s1))
    print('--------------------------------------\n')
    print(x.lengthOfLongestSubstring(s2))
    print('--------------------------------------\n')
    print(x.lengthOfLongestSubstring(s3))
    print('--------------------------------------\n')
    print(x.lengthOfLongestSubstring(s4))
