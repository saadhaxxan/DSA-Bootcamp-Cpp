#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int mySqrt(int n) 
{
    int s = 1;
    int e = n/2;
    int mid;
    while(s <= e){
        mid = s + (e-s)/2;  
        if(mid == n/mid && n%mid == 0)
            return mid;
        else if(mid > n/mid)
            e = mid-1;
        else 
            s = mid+1;
    }
    return sqrt(n);

}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << sqrtN(n) << endl;
    }
 
    return 0;
}   