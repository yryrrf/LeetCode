/*
Runtime: 1000 ms, faster than 60.97% of Python3 online submissions for Maximum Ice Cream Bars.
Memory Usage: 28 MB, less than 53.28% of Python3 online submissions for Maximum Ice Cream Bars.
*/
class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        ans = 0
        costs.sort()
        for i in range(0,len(costs)):
            if coins >= costs[i]:
                coins-=costs[i]
                ans+=1
            else:
                break
        return ans