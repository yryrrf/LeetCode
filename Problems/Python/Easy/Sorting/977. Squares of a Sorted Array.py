'''
Runtime: 301 ms, faster than 50.58% of Python3 online submissions for Squares of a Sorted Array.
Memory Usage: 16.3 MB, less than 52.02% of Python3 online submissions for Squares of a Sorted Array.
'''
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        boundary = 0;
        while boundary<len(nums) and nums[boundary]<0:
            boundary+=1;
        i = boundary-1;
        j = boundary;
        ans = [];
        while i>=0 and j<len(nums):
            if pow(nums[i],2)<pow(nums[j],2):
                ans.append(pow(nums[i],2));
                i-=1;
            else:
                ans.append(pow(nums[j],2));
                j+=1;
                
        while i>=0:
            ans.append(pow(nums[i],2));
            i-=1;
            
        while j<len(nums):
            ans.append(pow(nums[j],2));
            j+=1;
            
        return ans;
                