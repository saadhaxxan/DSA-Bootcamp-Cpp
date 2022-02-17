	#include <bits/stdc++.h>
	using namespace std;
	long long bin_to_dec(string str, int n){
		
		if(n == str.size()-1)
		if(str[n] == '0')
			 	return 0;
			else
				return 1;

		if(str[n] == '0')
			return bin_to_dec(str, n+1)+0;
		else
			return bin_to_dec(str, n+1)+pow(2, str.size()-n-1);
	}

int main(){

		int t;
		cin >> t;

		while(t--){
			int size;
			cin >> size;
			string str;
			cin >> str;
			cout << bin_to_dec(str, 0) << endl;
	}
		return 0;
}