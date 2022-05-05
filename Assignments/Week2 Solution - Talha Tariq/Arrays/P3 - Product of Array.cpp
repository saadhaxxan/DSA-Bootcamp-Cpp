#include<bits/stdc++.h>
#include <string.h>
using namespace std;
      vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int pr = 1;

        bool *arr = new int[nums.size()];

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0)
                pr *= nums[i];
        }
         
        return res;
    }
int main(){
    
    vector<int> v =  {  1,2,3,4 };
    vector<int> ans = productExceptSelf(v);
        for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}