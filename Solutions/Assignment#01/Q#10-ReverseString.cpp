//Problem Source:https://leetcode.com/problems/reverse-string/submissions/
//Accepted Solution
#include<iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};
