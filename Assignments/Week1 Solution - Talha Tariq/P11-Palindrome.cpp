#include<bits/stdc++.h>
using namespace std;
	
	
	int isPalindrome(string str)
	{
	    // Your code goes here
	    for(int i=0; i<str.size()/2; i++)
	    	if(str[i]!=str[str.size()-i-1])
	    		return 0;

		return 1;
	}

int main(){
	string str = "abbba";
	cout << isPalindrome(str) << endl;


	return 0;
}