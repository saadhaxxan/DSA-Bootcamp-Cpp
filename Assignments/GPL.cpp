#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
	    long long n;cin>>n;
		string s;cin>>s;
		long long  num=0;
		for(long long i=0;i<s.size();i++){ //0001
			long long digit = s[i] - '0';
			num += digit * (long long)pow(2,n-1-i);
		}
		cout<<num<<endl; 
	}
	
	return 0;
}
