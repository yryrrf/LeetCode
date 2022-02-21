'''
Runtime: 96 ms, faster than 65.27% of Python3 online submissions for Concatenation of Array.
Memory Usage: 14.1 MB, less than 98.71% of Python3 online submissions for Concatenation of Array.
'''
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = nums + nums
        return ans
        