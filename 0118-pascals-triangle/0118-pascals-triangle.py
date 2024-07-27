class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        res=[[1]]

        for i in range(numRows-1):
            row=[]
            next_el_size=i+2
            for j in range(next_el_size):
                if(j==0 or j==next_el_size-1):
                    row.append(1)
                else:
                    last=res[-1]
                    row.append(last[j-1]+last[j])
            res.append(row)
        return res
        