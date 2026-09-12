/*
Problem: Group Anagrams

Given an array of strings, group the anagrams together.

An anagram is a word formed by rearranging the letters of another word.

Example:

Input:
["eat", "tea", "tan", "ate", "nat", "bat"]

Output:
[
    ["eat", "tea", "ate"],
    ["tan", "nat"],
    ["bat"]
]

Note:
The order of the output groups does not matter.
*/
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;

for (string word : strs) {
    string key = word;
    sort(key.begin(), key.end());

    mp[key].push_back(word);
}

vector<vector<string>> result;

for (auto& pair : mp) {
    result.push_back(pair.second);
}

return result;
    }
};

int main() {
    Solution solution;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = solution.groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;

    for (auto& group : result) {
        cout << "[ ";

        for (string word : group) {
            cout << word << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}