#include <bits/stdc++.h>
using namespace std;

/*
===========================================================
Problem 1: Two Sum
===========================================================

Problem Statement:
Given an array of integers nums and an integer target,
return the indices of the two numbers such that they add
up to target.

You may assume that each input has exactly one solution,
and you may not use the same element twice.

Example:
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9
Therefore, the answer is [0, 1].

-----------------------------------------------------------
Approach:
-----------------------------------------------------------

We use an unordered_map to store each number along with
its index.

For every element nums[i]:

1. Calculate the complement:
       complement = target - nums[i]

2. Check whether this complement already exists in the map.

3. If it exists, we have found the two required numbers.
   Return the index of the complement and the current index.

4. Otherwise, store the current number and its index
   in the map.

Example:

nums = [2, 7, 11, 15]
target = 9

i = 0:
nums[0] = 2
complement = 9 - 2 = 7
7 is not in the map.
Store 2 -> 0

i = 1:
nums[1] = 7
complement = 9 - 7 = 2
2 is already in the map at index 0.

Therefore, return [0, 1].

-----------------------------------------------------------
Time Complexity:
-----------------------------------------------------------

O(n)

We traverse the array once.
The unordered_map provides average O(1) lookup and insertion.

-----------------------------------------------------------
Space Complexity:
-----------------------------------------------------------

O(n)

In the worst case, we may store all elements of the array
in the unordered_map.

-----------------------------------------------------------
Algorithm:
-----------------------------------------------------------

1. Create an empty unordered_map.
2. Traverse the array from left to right.
3. For each element, calculate target - nums[i].
4. Check if the complement exists in the map.
5. If it exists, return its index and i.
6. Otherwise, store nums[i] and its index.
7. Return an empty vector if no pair is found.

===========================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};


int main() {

    // Test Case 1
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;

    vector<int> result = solution.twoSum(nums, target);

    cout << "Input: [2, 7, 11, 15]" << endl;
    cout << "Target: 9" << endl;

    cout << "Output: ["
         << result[0] << ", "
         << result[1] << "]" << endl;

    return 0;
}