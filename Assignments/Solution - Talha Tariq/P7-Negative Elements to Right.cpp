#include<bits/stdc++.h>
using namespace std;

 void segregateElements(int arr[],int n)
    {
        // Your code goes here
    	vector<int> pos,neg;
    	for(int i=0; i<n; i++){
    		if(arr[i]<0)
    			neg.push_back(arr[i]);
    		else
    			pos.push_back(arr[i]);
    	}
    	for(int i=0; i<pos.size(); i++)
    		arr[i] = pos[i];
    	for(int i=0; i<neg.size(); i++)
    		arr[i+pos.size()] = neg[i];
    }
int main(){
	int v[8] = {1, -1, 3, 2, -7, -5, 11, 6};
	segregateElements(v, 8);
	for(auto &i:v)
		cout << i << " " ;

	return 0;
}