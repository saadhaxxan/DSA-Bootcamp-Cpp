#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		string c;
		getline(cin, c);
		for(int i=0;i<c.size();i++){
		if( c[i] >= 'a' && c[i] <= 'z') cout<< (char)(c[i]-32);
		else cout<<endl;
		}
	
	return 0;
};