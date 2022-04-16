'''
Runtime: 137 ms, faster than 60.04% of Python3 online submissions for Design a Stack With Increment Operation.
Memory Usage: 14.9 MB, less than 81.93% of Python3 online submissions for Design a Stack With Increment Operation.
'''
class CustomStack:

    def __init__(self, maxSize: int):
        self.array = [];
        self.maxSize = maxSize;

    def push(self, x: int) -> None:
        if len(self.array)==self.maxSize:
            return;
        self.array.append(x);

    def pop(self) -> int:
        if len(self.array)==0:
            return -1;
        tmp = self.array[-1];
        self.array.pop();
        return tmp;

    def increment(self, k: int, val: int) -> None:
        if k >len(self.array):
            k = len(self.array)
        for i in range(0,k):
            self.array[i] +=val;


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)