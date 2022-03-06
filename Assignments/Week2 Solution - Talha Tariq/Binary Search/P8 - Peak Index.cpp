#include<bits/stdc++.h>
#include <string.h>
using namespace std;

 int peakIndexInMountainArray(vector<int>& arr) {
        
    int s = 0;
    int end = arr.size()-1;
    int mid = 0;
    int n = arr.size()-1;
    while(s<=end){

        mid = s+(end-s)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n || arr[mid+1] <= arr[mid]))
            return mid;

       else if(mid > 0 && arr[mid-1] > arr[mid])
            end = mid-1;
    
        else  
             s = mid+1;
    }
    return mid;
}

int main(){ 

    vector<int> vector = {15,12,10,8};
 
    cout << peakIndexInMountainArray(vector) << endl;
    return 0;
}   