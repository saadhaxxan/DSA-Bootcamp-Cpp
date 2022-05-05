	#include <bits/stdc++.h>
	using namespace std;
	int main(){

		int t;
		cin >> t;
		while(t--){
		
			int n;
			cin >> n;
			long long total = 1;
			while(n--){
				int number;
				cin >> number;
				total *= number;
			}
			if(total%10 == 2 || total%10 == 3 || total%2 == 5 )
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

			total = 1;	

		}
		return 0;
	}