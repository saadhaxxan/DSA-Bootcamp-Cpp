#include<bits/stdc++.h>
#include <string.h>
using namespace std;

// Brute Force
int countNegativesB(vector<vector<int>>& grid) {
    int count=0;

    for(int i=0; i<grid.size(); i++){
    
         for(int j=0; j<grid[i].size(); j++){
    
            if(grid[i][j] < 0)
                count++;
    
        }
    }
    return count;
}


// Binary Search
int bin_search(vector<int>& v){
    int s = 0;
    int e = v.size()-1;
    int mid;
    int pos = -1;
        
    while(s<=e){
        mid = s+(e-s)/2;
        if(v[mid]>0)
            s = mid+1;
        else{
            e = mid-1;
            pos = mid; 
        }
    }
    if(pos!=-1 && v[pos] < 0){
        return v.size()-pos;
    }
    return 0;
}
int countNegatives(vector<vector<int>>& grid) {
   int count = 0;
   for(int i=0; i<grid.size(); i++){
    count += bin_search(grid[i]);
   }

    return count;
}

int main(){ 

    vector<vector<int>> vector = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
 
    cout << countNegatives(vector) << endl;
    return 0;
}   