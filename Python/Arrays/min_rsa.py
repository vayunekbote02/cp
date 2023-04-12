# https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/

class Solution:
    def findMin(self, nums: List[int]) -> int:
        """ The idea is that if the value at left pointer 
        is less than the value at the right pointer, then the array is sorted
        and we can simply return the element at left pointer. Else, if value at 
        mid pointer is >= left pointer (means left part is sorted), then
        we need to search in the right portion. If mid pointer is < right pointer
        then we search in left portion of the right pointer, since all element to
        the right of right pointer will anyways be larger than it."""

        res = nums[0]
        l, r = 0, len(nums) - 1

        while l <= r:
            if nums[l] < nums[r]:
                res = min(res, nums[l])
                return res

            mid = (l + r) // 2
            res = min(res, nums[mid])
            if nums[mid] >= nums[l]:
                l = mid + 1
            else:
                r = mid - 1

        return res