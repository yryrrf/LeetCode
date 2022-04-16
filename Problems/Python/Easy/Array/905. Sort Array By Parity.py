'''
Runtime: 95 ms, faster than 67.91% of Python3 online submissions for Sort Array By Parity.
Memory Usage: 14.7 MB, less than 18.95% of Python3 online submissions for Sort Array By Parity.
'''
class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        oddArray = [];
        evenArray = [];
        for item in nums:
            if item%2 == 1:
                oddArray.append(item);
            else:
                evenArray.append(item);
        return evenArray+oddArray;