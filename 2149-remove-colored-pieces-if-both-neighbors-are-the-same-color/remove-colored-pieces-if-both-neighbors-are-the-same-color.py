class Solution:
    def winnerOfGame(self, colors: str) -> bool:

        # remove the colored pieces, if both are same

        # count the triple a's and triple b's 


        # if a's are greater than b's then ]
        res = False
        cnta =0
        cntb =0

        for i in range (len(colors)-2):
            if colors[i] == 'A' and colors[i+1] == 'A' and colors[i+2] == 'A':
                cnta +=1
            elif colors[i] == 'B' and colors[i+1] == 'B' and colors[i+2] == 'B':
                cntb+=1
        

        if(cnta>cntb):
            return True
        

        return False 


        