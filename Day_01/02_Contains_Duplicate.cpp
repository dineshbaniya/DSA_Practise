#include <bits/stdc++.h>
using namespace std;

/*
===========================================================
Problem 2: Contains Duplicate
===========================================================

Problem Statement:
Given an integer array nums, return true if any value
appears at least twice in the array, and return false
if every element is distinct.

Example 1:
Input:
nums = [1, 2, 3, 1]

Output:
true

Explanation:
The value 1 appears more than once in the array.

-----------------------------------------------------------
Approach:
-----------------------------------------------------------

We use an unordered_set to keep track of the elements
that we have already seen.

For every element in the array:

1. Check whether the element already exists in the set.
2. If it exists, a duplicate has been found, so return true.
3. Otherwise, insert the element into the set.
4. If we finish traversing the array without finding a
   duplicate, return false.

Example:

nums = [1, 2, 3, 1]

Start with an empty set.

i = 0:
Element = 1
1 is not in the set.
Insert 1.

Set = {1}

i = 1:
Element = 2
2 is not in the set.
Insert 2.

Set = {1, 2}

i = 2:
Element = 3
3 is not in the set.
Insert 3.

Set = {1, 2, 3}

i = 3:
Element = 1
1 is already present in the set.

Therefore, a duplicate exists.
Return true.

-----------------------------------------------------------
Time Complexity:
-----------------------------------------------------------

O(n)

We traverse the array once.
The unordered_set provides average O(1) insertion
and search operations.

-----------------------------------------------------------
Space Complexity:
-----------------------------------------------------------

O(n)

In the worst case, all elements are distinct and we
store all n elements in the unordered_set.

-----------------------------------------------------------
Algorithm:
-----------------------------------------------------------

1. Create an empty unordered_set.
2. Traverse the array from left to right.
3. For each element, check whether it exists in the set.
4. If it exists, return true.
5. Otherwise, insert the element into the set.
6. If the complete array is traversed without finding
   a duplicate, return false.

===========================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int num : nums) {

            if (seen.find(num) != seen.end()) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};


int main() {

    // Test Case 1
    vector<int> nums = {1, 2, 3, 1};

    Solution solution;

    bool result = solution.containsDuplicate(nums);

    cout << "Input: [1, 2, 3, 1]" << endl;

    cout << "Output: "
         << (result ? "true" : "false")
         << endl;

    return 0;
}