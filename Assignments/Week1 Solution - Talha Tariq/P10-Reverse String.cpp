#include<bits/stdc++.h>
using namespace std;
 void reverseString(vector<char>& s) {
     reverse(s.begin(), s.end());   
    }
int main(){
	vector<char> v = {'H','a','n','n','a','h'};
	cout << "Original String: ";
	for(auto &i: v)
		cout << i;
	cout << endl;
	reverseString(v);
	for(auto &i: v)
		cout << i;


	return 0;
}