class Solution(object):
    def rangeSum(self, nums, n, left, right):
        """
        :type nums: List[int]
        :type n: int
        :type left: int
        :type right: int
        :rtype: int
        """
        list_n=[]
        for i in range(len(nums)):
            acc=0
            for j in range(i,len(nums)):
                acc=acc+nums[j]
                list_n.append(acc)
        list_n.sort()

        return sum(list_n[left-1:right])% (10**9 + 7)
        