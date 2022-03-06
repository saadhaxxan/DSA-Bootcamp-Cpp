#include<bits/stdc++.h>
#include <string.h>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        set<vector<int>> s;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                for(int k=j; k<nums.size(); k++){   
                    if(i!=j && j!=k && i!=k){
                        if(nums[i]+nums[j]+nums[k] == 0)
                            s.insert({nums[i],nums[j],nums[k]});               
                }
            }
        }
    }
    std::set<vector<int>>::iterator itr;
     for (itr = s.begin(); itr != s.end(); itr++) {
         res.push_back(*itr);
    }
 return res;
}
int main(){
    
    vector<int> v =  {-1,0,1,2,-1,-4};

    vector<vector<int>> ans = threeSum(v);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
    return 0;
}