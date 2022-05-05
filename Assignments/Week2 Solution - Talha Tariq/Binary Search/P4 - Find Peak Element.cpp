#include<bits/stdc++.h>
#include <string.h>
using namespace std;

      
int findPeakBruteForce(vector<int> &arr) {
   for(int i=1; i<arr.size()-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1] )
                return arr[i];
   }

   if(arr[0] < arr[1] && arr[1] < arr[2])
        return arr[arr.size()-1];
    else
        return arr[0];
}
// Binary Search    
int findPeakBinary(vector<int> &arr) {

    int start = 0;
    int end = arr.size()-1;
        
    while(start < end){
        int mid = start  + (end-start)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
            return arr[mid];
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1] )
            start = mid+1;
        else
            end = mid-1;
    }

   return arr[start];
}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v; 
       for(int i=0; i<n; i++){
            int val;
            cin >> val;
            v.push_back(val);
        }
   
        cout << findPeakBinary(v) << endl;
    }
 
    return 0;
}   