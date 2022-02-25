class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
        }
        for(auto pair:m){
            if(pair.second>=2){
                return pair.first;
            }
        }
        return 0;
    }
};
