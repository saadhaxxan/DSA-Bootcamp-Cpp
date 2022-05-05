#include<bits/stdc++.h>
using namespace std;
	
 void convertToWave(vector<int>& arr, int n){
        
        // Your code here
 	sort(arr.begin(), arr.end());
 	for(int i=0; i<n-1; i+=2){
 		int tmp = arr[i];
 		arr[i] = arr[i+1];
 		arr[i+1] = tmp;
    }
 	}
int main(){
	vector<int> v = {1,2,3,4,5};
	convertToWave(v, 5);
	for(auto &i:v)
		cout << i << " " ;

	return 0;
}