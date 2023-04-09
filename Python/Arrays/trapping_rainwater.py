# https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution:
    def trappingWater(self, arr,n):
        if not arr:
            return 0
        l, r = 0, n-1
        left_max, right_max = arr[l], arr[r]
        res = 0
        
        while l < r:
            if left_max < right_max:
                l += 1
                left_max = max(left_max, arr[l])
                if min(left_max, right_max) - arr[l] > 0:
                    res += (min(left_max, right_max) - arr[l])
            else:
                r -= 1
                right_max = max(right_max, arr[r])
                if min(left_max, right_max) - arr[r] > 0:
                    res += (min(left_max, right_max) - arr[r])
                    
        return res
