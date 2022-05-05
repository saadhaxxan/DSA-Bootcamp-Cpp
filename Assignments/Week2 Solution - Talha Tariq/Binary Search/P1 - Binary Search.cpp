#include<bits/stdc++.h>
#include <string.h>
using namespace std;

    int binarySearch(int *input, int n, int val)
    {
        
        //Write your code here
        int start=0;
        int end=n-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
                    
            if(input[mid]==val)
            {
                return mid;
            }
            else if(input[mid]>val)
            {
                end=mid-1;
            }
            else if(input[mid]<val)
            {
                start=mid+1;
            }
        }
        return -1;
        }

int main(){

    int l;
    cin >> l;
    int *arr = new int[l];
    for(int i=0; i<l; i++){
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
   
        cout << binarySearch(arr, l, n);
    }
    
    return 0;
}