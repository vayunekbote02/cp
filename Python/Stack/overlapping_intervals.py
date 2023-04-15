#https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1

class Solution:
    def overlappedInterval(self, Intervals):
        #Code here
        Intervals.sort()
        stack = []
		
        stack.append(Intervals[0])
        for i in Intervals[1:]:
            if stack[-1][0] <= i[0] <= stack[-1][1]:
                stack[-1][1] = max(stack[-1][1], i[1])
            else:
                stack.append(i)
                
        return stack