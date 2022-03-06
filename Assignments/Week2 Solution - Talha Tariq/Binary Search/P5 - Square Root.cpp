#include<bits/stdc++.h>
#include <string.h>
using namespace std;
int sqrtN(long long int n)
{
    long long s = 1;
    long long e = n/2;
    long long mid;
    while(s <= e){
        mid = s + (e-s)/2;  
        if(mid == n/mid && n%mid == 0)
            return mid;
        else if(mid > n/mid)
            e = mid-1;
        else 
            s = mid+1;
    }
    return floor(sqrt(n));

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