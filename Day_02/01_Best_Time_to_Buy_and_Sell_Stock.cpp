/*
Problem:
Best Time to Buy and Sell Stock

Problem Statement:
You are given an array of prices where prices[i] represents the price
of a stock on the ith day.

You can choose one day to buy one stock and choose a different day
in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.

If no profit is possible, return 0.

Example:
Input:
prices = [7,1,5,3,6,4]

Output:
5

Explanation:
Buy the stock on day 2 at price 1
and sell it on day 5 at price 6.

Profit = 6 - 1 = 5


Approach:
We keep track of the minimum stock price seen so far.

For every price:
1. Update the minimum price if the current price is smaller.
2. Calculate the profit by selling at the current price.
3. Keep track of the maximum profit found so far.

This allows us to solve the problem in a single traversal of the array.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};