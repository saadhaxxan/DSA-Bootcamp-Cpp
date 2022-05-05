#include<bits/stdc++.h>
#include <string.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        
        int s = 0;
        int e = nums.size()-1;
        int mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                e = mid-1;
            else
                s = mid+1;
        }
        return -1;
        }
int main(){
 
    return 0;
}   