#include<bits/stdc++.h>
#include <string.h>
using namespace std;

      
class Solution {
public:
    int guessNumber(int n) {        
        int start = 1;
        int end = n;
        
        while(start <= end){
            
           int mid = start + (end-start)/2;
        
            int result = guess(mid);
            
            if(result == 0){
                    return mid;               
             }
            else if(result < 0)
                 end = mid-1;
            else 
                start = mid+1;
     
    }
        return -1;
    }
};
int main(){

 
    return 0;
}