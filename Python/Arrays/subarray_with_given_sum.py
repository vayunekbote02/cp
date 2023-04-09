#Subarray with given sum

class Solution:
    def subArraySum(self,arr, n, s): 
        #Write your code here
        ptr1, ptr2 = 0, 0
        total = arr[0]
        if total == s:
            return [1, 1]
            
        if s == 0:
            return [-1]
            
        while ptr2 < n-1:
            if total + arr[ptr2+1] <= s:
                total += arr[ptr2+1]
                ptr2 += 1
            else:
                total -= arr[ptr1]
                ptr1 += 1
            
            if total == s:
                return [ptr1+1, ptr2+1]
                
        return [-1]
