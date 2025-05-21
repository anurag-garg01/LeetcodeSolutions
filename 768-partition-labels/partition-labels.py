class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        # last character "ababcc"
        # partition the string such that one part has only one kind of characters 

        """
            1. hashmap create 
            2. iterate over the list and get the last occuring index, save it as maxi and when ind ==maxi
                move to the next phase 

        """

        # hashmap done 
        my_dict = {}

        for i,x in enumerate(s):
            my_dict[x] = i
        

        print(my_dict)


        # iterate over the list 
        maxi = my_dict[s[0]]
        start =0
        n = len(s)

        ans = []

        print('maxi',maxi)


        for i in range(n):
            start+=1
            if maxi == i:
                ans.append(start)
                start = 0
                # if i<n-1
                # maxi = max(maxi,my_dict[s[i+1]])
            else :     
                maxi = max(maxi,my_dict[s[i]])
                if maxi ==i: 
                    ans.append(start)
                    start=0

        return ans


        



        