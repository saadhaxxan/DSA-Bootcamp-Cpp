//Problem Source:https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
//Accepted Solution
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:


	int isPalindrome(string S)
	{
	    for(int i=0;i<S.length()/2;i++)
	    {
	        if(S[i] != S[S.length()- i -1])
	            return 0;
	    }
	    return 1;
	}

};

int main()
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
