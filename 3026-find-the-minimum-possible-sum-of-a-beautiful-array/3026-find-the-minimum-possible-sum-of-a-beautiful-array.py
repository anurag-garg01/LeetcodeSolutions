class Solution:
    def minimumPossibleSum(self, n: int, target: int) -> int:
        ans = 0
        st = set()
        temp = 1


        for i in range(1,n+1):
            while(temp in st):
                temp+=1
            ans += temp
            st.add(temp)
            st.add(target-temp)

        return ans
