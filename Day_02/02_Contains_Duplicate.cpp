/*
Problem:
Contains Duplicate

Problem Statement:
Given an integer array nums, return true if any value appears at least twice
in the array, and return false if every element is unique.

Example 1:
Input:
nums = [1,2,3,1]

Output:
true

Explanation:
The value 1 appears twice.


Example 2:
Input:
nums = [1,2,3,4]

Output:
false

Explanation:
Every element appears only once.


Example 3:
Input:
nums = [1,1,1,3,3,4,3,2,4,2]

Output:
true

Explanation:
The value 1 appears multiple times.


Approach:
We can use a hash set to keep track of the elements we have already seen.

While traversing the array:
- If the current element is already present in the set, a duplicate exists.
- Otherwise, insert the current element into the set.

This allows us to detect duplicates in a single traversal.

Time Complexity:
O(n)

Space Complexity:
O(n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    }
};