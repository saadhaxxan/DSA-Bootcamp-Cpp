//Problem Source : https://leetcode.com/problems/find-the-duplicate-number/submissions/
//Accepted Solution

#include<iostream>
#include<unordered_map>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++)
    {
        umap[nums[i]]++;
        if (umap[nums[i]] > 1)
            return nums[i];
    }
    return 0;
}
