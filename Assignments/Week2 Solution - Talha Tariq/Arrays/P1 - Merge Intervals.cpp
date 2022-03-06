#include<bits/stdc++.h>
#include <string.h>
using namespace std;
    
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            
            if(intervals.size()==1)   
                     return intervals;
            vector<vector<int>> v;
              sort(intervals.begin(), intervals.end());
            int start = intervals[0][0];
            int end = intervals[0][1];

            for(int i=1; i < intervals.size(); i++){             
                if(intervals[i][0] <= end){
                    end = intervals[i][1];
                }
                else{
                    v.push_back({start, end});
                    start = intervals[i][0];
                    end = intervals[i][1];
                   
                    }
                if(i==intervals.size()-1){
                    v.push_back({start,end});
                    }
                }
              
            return v;
        }   
int main(){
    
    vector<vector<int>> v =  {{1,4},{4,5}};

    vector<vector<int>> ans = merge(v);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}