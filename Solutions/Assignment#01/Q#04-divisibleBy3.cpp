//Problem Source https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1/#
//Accepted Solution

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%3==0)
            return 1;
        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
