class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """

        eat : ["eat","ate","tea"]

        """

        res = []


        # take a hashmap of string : List[str]

        mp = collections.defaultdict(list)

        n = len(strs)

        for i in range (n):
            # temp= strs[i].sort() # can we sort string like this ? 
            temp = strs[i]
            count = [0]*26

            for char in strs[i]:
                count[ord(char)-ord('a')]+=1
            



            # sorted_temp = "".join(sorted(temp))
            # mp[sorted_temp].append(strs[i])
            mp[tuple(count)].append(strs[i])

        
        # we have the map at the end 

        for key,value in mp.items():
            res.append(value)
        

        return res


