class Solution:
    def isHappy(self, n: int) -> bool:
        st = set()

        while n!=1:
            # sum of the numbers 
    
            sum =0

            while n !=0:
                last_digit = n%10
                n = n//10
                sum += last_digit * last_digit

            print('sum =>',sum)

            if sum in st:
                return False
                
            st.add(sum)

            

            if sum == 1:
                return True
                
            n = sum


        return True   


        