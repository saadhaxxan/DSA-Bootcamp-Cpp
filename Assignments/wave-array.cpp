// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        if(n %2==0){
        for(int i=0;i<n;i+=2){
            swap(arr[i],arr[i+1]);
            /*int temp =arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            */
        }}
        else{
            for(int i=0;i<n-2; i+=2){
            swap(arr[i],arr[i+1]);
            /*int temp =arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            */
        }
        }
    }
};

