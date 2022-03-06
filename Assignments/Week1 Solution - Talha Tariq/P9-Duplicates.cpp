	#include <bits/stdc++.h>
	using namespace std;
	//O(n) Method
	    int findDuplicate(vector<int>& nums) {

			set<int> s;
			for(int i=0; i<nums.size(); i++){
				if(s.count(nums[i]))
					return nums[i];
				else
					s.insert(nums[i]);
			}	

		return 1;
        }

       //O(lgn) Method
      int findDuplicate2(vector<int>& nums) {	
      	sort(nums.begin(), nums.end());
      	for(int i=0; i<nums.size(); i++)
      		if(nums[i] == nums[i+1])
      			return nums[i];
		
			return 1;
		}

int main(){
		vector<int> v = {1,3,4,2,2}; 
		cout << findDuplicate2(v);
		return 0;
}