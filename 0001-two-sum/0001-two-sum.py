class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mapN={}
        lenN=len(nums)

        for i in range(lenN):
            mapN[nums[i]]=i

        for i in range(lenN):
            j=target - nums[i]
            if j in mapN and mapN[j] != i:
                return [i, mapN[j]]
        
        return []
        
        