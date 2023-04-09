# https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution:
    def MissingNumber(self,array,n):
        # code here
        total = (n * (n+1)) // 2
        if total == sum(array):
            return -1
            
        else:
            return total - sum(array)
