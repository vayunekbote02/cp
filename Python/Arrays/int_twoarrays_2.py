# https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        d = {}
        for i in nums1:
            d[i] = d.get(i, 0) + 1
            
        for i in nums2:
            d[i] = d.get(i, 0) - 1
            if d[i] >= 0:
                res.append(i)
                
        return res