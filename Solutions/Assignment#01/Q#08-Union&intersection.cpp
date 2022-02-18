//UNION
//problem Source:https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
//accpted solution
#include<iostream>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
}

//INTERSECTION
//problem source:https://leetcode.com/problems/intersection-of-two-arrays/submissions/
//accepted solution

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> intersection;
    for(int i=0;i<nums1.size();i++)
    {
        auto x = find(nums2.begin(),nums2.end(),nums1[i]);
        if(x != nums2.end())
        {
            intersection.insert(nums1[i]);
        }
    }
    vector<int> i;
    for(auto ss:intersection)
        i.push_back(ss);
    return i;
}

