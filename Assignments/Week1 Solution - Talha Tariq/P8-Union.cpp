#include <bits/stdc++.h>
using namespace std;
	
	int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> uni;
        
        for(int i=0; i<n; i++)
        	uni.insert(a[i]);

        for(int i=0; i<m; i++)
        	uni.insert(b[i]);

        
        return uni.size();

    }
int main(){
	int a[6] = {85 ,25, 1 ,32 ,54, 6};
	int b[2] = {85,2};

	cout << doUnion(a,6,b,2) << endl;


	return 0;
}