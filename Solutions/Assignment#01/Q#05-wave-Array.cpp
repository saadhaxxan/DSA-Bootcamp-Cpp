//Problem Source:https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/
//Accepted solution
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void convertToWave(vector<int>& arr, int n){

        for(int i=0;i<arr.size();i+=2)
        {
            if(arr.size() % 2 != 0 && i ==arr.size()-1)
                break;
            swap(arr[i],arr[i+1]);
        }
    }
};

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array

        cout<<endl;
    }
}
