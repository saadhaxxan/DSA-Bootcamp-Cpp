#include<bits/stdc++.h>
#include <string.h>
using namespace std;

      
      bool isPerfectSquare(long long n) {
           if(n==1)
               return true;

           long long start = 1;
           long long end = n/2;
           long long mid;

           while(start <= end)
           {

                mid  = (start+end)/2;

               if(mid== n/mid && n%mid == 0)
                   return true;

               else if(mid < n/mid)

                   start = mid+1;

               else

                   end = mid-1;

                 }

           return false;

       }


    

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
    
        if(isPerfectSquare(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}