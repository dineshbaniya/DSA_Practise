#include <bits/stdc++.h>
using namespace std;

/*
===========================================================
Problem 3: Valid Anagram
===========================================================

Problem Statement:
Given two strings s and t, return true if t is an anagram
of s, and return false otherwise.

An anagram is a word or phrase formed by rearranging the
letters of another word or phrase, using all the original
letters exactly once.

Example 1:
Input:
s = "anagram"
t = "nagaram"

Output:
true

Explanation:
Both strings contain the same characters with the same
frequencies.

Example 2:
Input:
s = "rat"
t = "car"

Output:
false

Explanation:
The strings contain different characters.

-----------------------------------------------------------
Approach:
-----------------------------------------------------------

We use an array of size 26 to store the frequency of each
lowercase English letter.

For every character in string s, increase its frequency.

For every character in string t, decrease its frequency.

If s and t are anagrams, every character must have the
same frequency in both strings.

Therefore, after processing both strings, all frequency
values should be zero.

Steps:

1. If the lengths of s and t are different, return false.
2. Create an integer array of size 26 initialized to zero.
3. Traverse string s and increase the frequency of each
   character.
4. Traverse string t and decrease the frequency of each
   character.
5. Check every frequency value.
6. If any value is not zero, return false.
7. Otherwise, return true.

Example:

s = "anagram"
t = "nagaram"

Frequency of characters in s:
a = 3
n = 1
g = 1
r = 1
m = 1

Frequency of characters in t:
a = 3
n = 1
g = 1
r = 1
m = 1

Both strings have identical character frequencies.

Therefore, return true.

-----------------------------------------------------------
Time Complexity:
-----------------------------------------------------------

O(n)

We traverse the two strings once.

Here, n represents the length of the strings.

The final frequency check examines only 26 positions,
which is constant time.

Therefore, the overall time complexity is O(n).

-----------------------------------------------------------
Space Complexity:
-----------------------------------------------------------

O(1)

We use an array of only 26 integers.

Since the size of the array is fixed and does not depend
on the input size, the space complexity is O(1).

-----------------------------------------------------------
Algorithm:
-----------------------------------------------------------

1. Check whether the lengths of s and t are equal.
2. If their lengths are different, return false.
3. Create an integer frequency array of size 26 and
   initialize all values to zero.
4. Traverse string s and increment the frequency of each
   character.
5. Traverse string t and decrement the frequency of each
   character.
6. Traverse the frequency array.
7. If any value is not zero, return false.
8. Return true.

===========================================================
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        int frequency[26] = {0};

        for (char c : s) {
            frequency[c - 'a']++;
        }

        for (char c : t) {
            frequency[c - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (frequency[i] != 0) {
                return false;
            }
        }

        return true;
    }
};


int main() {

    // Test Case 1
    string s = "anagram";
    string t = "nagaram";

    Solution solution;

    bool result = solution.isAnagram(s, t);

    cout << "Input s: " << s << endl;
    cout << "Input t: " << t << endl;

    cout << "Output: "
         << (result ? "true" : "false")
         << endl;

    return 0;
}