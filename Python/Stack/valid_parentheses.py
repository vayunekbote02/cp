#https://leetcode.com/problems/valid-parentheses/submissions/939589246/

class Solution:
    def checkValid(self, a, b):
        if (a == '(' and b == ')') or (a == '{' and b == '}') or (a == '[' and b == ']'):
            return True
        return False

    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if i == "(" or i == "{" or i == "[":
                stack.append(i)
            else:
                if len(stack) == 0:
                    return False
                if self.checkValid(stack[-1], i):
                    stack.pop()
                else:
                    return False

        return not stack
