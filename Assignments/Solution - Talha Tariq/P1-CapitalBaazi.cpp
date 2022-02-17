#include <bits/stdc++.h>
using namespace std;
int main(){

	//Input 
	string str;
	getline(cin, str);
	
	//Into UpperCase
	transform(str.begin(), str.end(),str.begin(), ::toupper);
	
	//Output of one by one word
	stringstream ss(str);
	string upper;
	while(ss >> upper){
	 	cout << upper << endl;
		}
}