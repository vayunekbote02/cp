# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/931878851/

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price, profit = prices[0], 0
        
        for price in prices:
            if price < min_price:
                min_price = price
            if price - min_price > profit:
                profit = price - min_price

        return profit