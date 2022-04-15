'''
Runtime: 1332 ms, faster than 13.66% of Python3 online submissions for Sort an Array.
Memory Usage: 22.8 MB, less than 21.34% of Python3 online submissions for Sort an Array.
'''
class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) == 1:
            return nums;
        mid = len(nums)//2;
        left = self.sortArray(nums[:mid]);
        right = self.sortArray(nums[mid:]);
        
        tmp = [];
        while len(left) and len(right):
            if left[0]>right[0]:
                tmp.append(right[0]);
                right.pop(0);
            else:
                tmp.append(left[0]);
                left.pop(0);
        while len(left):
            tmp.append(left[0]);
            left.pop(0);
        while len(right):
            tmp.append(right[0]);
            right.pop(0);
        
        return tmp;
        