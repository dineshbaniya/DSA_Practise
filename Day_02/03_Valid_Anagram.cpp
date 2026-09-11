/*
Problem:
Valid Anagram

Problem Statement:
Given two strings s and t, return true if t is an anagram of s,
and false otherwise.

An anagram is a word or phrase formed by rearranging the letters
of another word or phrase, using all the original letters exactly once.

Example 1:
Input:
s = "anagram"
t = "nagaram"

Output:
true

Explanation:
Both strings contain the same characters with the same frequencies.


Example 2:
Input:
s = "rat"
t = "car"

Output:
false

Explanation:
The characters and their frequencies are different.


Approach:
We can count how many times each character appears in both strings.

If both strings contain exactly the same characters with the same
frequencies, they are anagrams.

We can use an array of size 26 because the input contains lowercase
English letters.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
int main() {
    Solution solution;

    string s = "anagram";
    string t = "nagaram";

    bool result = solution.isAnagram(s, t);

    cout << boolalpha;
    cout << "Is Anagram: " << result << endl;

    return 0;
}