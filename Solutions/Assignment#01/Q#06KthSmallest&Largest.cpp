//problem source::https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
//Accepted Solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    vector<int> v;
    for (int i = l; i <= r; i++)
        v.push_back(arr[i]);
    sort(v.begin(), v.end());
    return v[k - 1];
}

//Kth Largest
int kthLargest(int arr[], int l, int r, int k)
{
    vector<int> v;
    for (int i = l; i <= r; i++)
        v.push_back(arr[i]);
    sort(v.begin(), v.end(), greater<int>());
    return v[k - 1];
}
