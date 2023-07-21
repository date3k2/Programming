class Solution:
    def findNumberOfLIS(self, nums: list[int]) -> int:
        n = len(nums)
        s = [1] * n
        count = [0] * n
        for i in range(1, n):
            for j in range(i - 1, -1, -1):
                if nums[j] < nums[i] and s[i] < s[j] + 1:
                    s[i] = s[j] + 1
        for i in range(1, n):
            for j in range(i - 1, -1, -1):
                if nums[j] < nums[i] and s[i] == s[j] + 1:
                    count[i] += max(count[j], 1)
        lIS = max(s)
        if lIS == 1:
            return n
        return sum([x for i, x in enumerate(count) if s[i] == lIS])


s = Solution()
print(s.findNumberOfLIS([-8, 2, -7, 4, -9, -4, -8, 9, 7, 0]))