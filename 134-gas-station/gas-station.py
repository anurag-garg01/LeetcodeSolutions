class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas)<sum(cost):
            return -1

        
        total =0 
        res = 0

        n = len(gas)
        for i in range(n):
            total += (gas[i]-cost[i])

            if total<0:
                # gurranted solution exist so we will move and check the next one 
                total =0
                res = i +1
        
        # here its gurranted that there is a solution that exists 
        return res
