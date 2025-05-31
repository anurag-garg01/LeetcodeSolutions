class MinStack:
    # return the mini from stack in o(1)


    def __init__(self):
        self.stack1 = []
        self.min_stack = []


        

    def push(self, val: int) -> None:
        self.stack1.append(val)

        if self.min_stack and self.min_stack[-1]>=val:
            self.min_stack.append(val)
        elif len(self.min_stack)==0:
            self.min_stack.append(val)

    def pop(self) -> None:
        ele = self.stack1.pop()

        if ele == self.min_stack[-1]:
            self.min_stack.pop()

        

    def top(self) -> int:
        return self.stack1[-1]
        

    def getMin(self) -> int:
        return self.min_stack[-1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()