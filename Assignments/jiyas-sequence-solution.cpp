#include <bits/stdc++.h> 

#define endl "\n";
using namespace std;
int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int n;cin>>n;
		long long product=1,ith_element;
		while(n--){
			cin>>ith_element; //getting all elemets of array
			product *= ith_element; // and multiplying to get product of all elements
		}

		if(product % 10 == 2 || product % 10 == 3 || product % 10 == 5 ) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
