'''
Runtime: 76 ms, faster than 70.12% of Python3 online submissions for Min Stack.
Memory Usage: 18.1 MB, less than 50.30% of Python3 online submissions for Min Stack.
'''
class MinStack:

    def __init__(self):
        self.array = [];
        self.size = 0;
        self.minArray = [math.inf];

    def push(self, val: int) -> None:
        self.array.append(val);
        self.size+=1;
        self.minArray.append(min(val,self.minArray[-1]));

    def pop(self) -> None:
        if self.size == 0:
            return;
        self.array.pop();
        self.minArray.pop();
        self.size-=1;

    def top(self) -> int:
        if self.size==0:
            return None;
        return self.array[self.size-1];

    def getMin(self) -> int:
        return self.minArray[-1];


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()