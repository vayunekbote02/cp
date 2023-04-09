# https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution:
    ##Complete this function
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr,N):
        ##Your code here
        currSum, maxSum = 0, arr[0]
        
        for i in arr:
            if currSum < 0:
                currSum = 0
            currSum += i
            if currSum > maxSum:
                maxSum = currSum

        return maxSum 
