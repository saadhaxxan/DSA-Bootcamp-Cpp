class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            auto x =s.find(nums[i+1]);
            if( x != s.end()){
                return nums[i+1];
            }
        }
        return 0;
    }
};
//the above solution was accepted but was better that only 10% of submissions :/


//this one was better and more general faster than 50%
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = 0;
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1]) {
                duplicate = nums[i];
                break;
            }
        return duplicate;
        
    }
};
