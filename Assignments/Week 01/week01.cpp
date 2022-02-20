#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair(int, int)
#define pll pair(long, long)
#define pb push_back
#define mod 10000007
#define inf 1000000000000000001 //17 0's
#define mp(x,y) make_pair(x,y)
#define mem(x,y) memset(a, val, sizeof(a))
#define FOR(i, j, k, in) for(int i=j; i<k; i+=in)

using namespace std;
int main()
{
//main code of every problem is in: /*...*/ 

	// #01, source: https://www.hackerearth.com/problem/algorithm/capitalbaazi
	/*while(true){
		string s;
		cin>>s;
		if(s.size()==0)
			break;
		for(int i = 0; i<s.size(); i++){
			s[i] = toupper(s[i]);
		}
		cout<<s<<endl;
	}*/

	// #02, source: https://www.hackerearth.com/problem/algorithm/jiyas-sequence
	/*int t;
	cin>>t;	//test cases
	while(t--){
		int n;
		ll res = 1;
		cin>>n;
		while(n--){
			int seq;
			cin>>seq;
			res *= seq;
		}
		if(res%10 == 2 || res%10 == 3 || res%10 == 5)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}*/

	// #3, source: https://www.hackerearth.com/problem/algorithm/gpl
	/*int t;
	cin>>t;
	while(t--){
		int n;
		ll res;
		string s;
		cin>>n>>s;
		// if(s.size() == 0)
		// 	break;
		bitset<60> bits(s);
		res = bits.to_ullong();
		cout<<res<<endl;
	}*/

	// #4, source: https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1/
	/*class Solution {
		public:
	    int isPossible(int N, int arr[]) {
	        int sum = 0;
	        for(int i = 0; i<N; i++){
	            sum += arr[i];
	        }
	        if(sum%3 == 0)
	            return 1;
	        else
	            return 0;
	    }
	};*/

	// #5, source: https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/
	/*class Solution{
	    public:
	    // arr: input array
	    // n: size of array
	    //Function to sort the array into a wave-like array.
	    void convertToWave(vector<int>& arr, int n){
	        for(int i=0; i<n; i+=2){
	            if(i+1>=n)
	                break;
	            swap(arr[i], arr[i+1]);
	        }
	    }
	};*/

	// #06, source: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
	/*class Solution{
	    public:
	    // arr : given array
	    // l : starting index of the array i.e 0
	    // r : ending index of the array i.e size-1
	    // k : find kth smallest element and return using this function
	    int kthSmallest(int arr[], int l, int r, int k) {
	        sort(arr, arr+r+1);
	        return arr[k-1];
	    }
	};*/

	// #7, source: Move all negative elements to one side of the array
	/*vector<int> v = {1, 4, 7, -3, -9, -11, 12, -99, 0, 10};
	sort(v.begin(), v.end());
	//reverse(v.begin(), v.end()); //if to movoe to another side (descending)
	for(auto x:v){
		cout<<x<<", ";
	}*/

	// #8, source: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#
	/*class Solution{
	    public:
	    //Function to return the count of number of elements in union of two arrays.
	    int doUnion(int a[], int n, int b[], int m)  {
	        set<int> s;
	        for(int i=0; i<n; i++){
	            s.insert(a[i]);
	        }
	        for(int i = 0; i<m; i++){
	            s.insert(b[i]);
	        }
	        return s.size();
	    }
	};*/

	// #9, source: https://leetcode.com/problems/find-the-duplicate-number/
	/*class Solution {
	public:
	    int findDuplicate(vector<int>& nums) {
	        int r;
	        unordered_map<int, int> m;
	        for(auto x:nums){
	            m[x]++;
	        }
	        for(auto x:m){
	            if(x.second > 1){
	                r =  x.first;
	                break;
	            }
	        }
	        return r;
	    }
	};*/

	// #10, source: https://leetcode.com/problems/reverse-string/
	/*class Solution {
	public:
	    void reverseString(vector<char>& s) {
	        reverse(s.begin(), s.end());
	        
	    }
	};*/

	// #11, source: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#
	/*class Solution{
	public:	
		
		
		int isPalindrome(string S)
		{
		    int n = S.size();
		    for(int i=0; i< n/2; i++){
		        if(S[i] != S[n-i-1])
		            return 0;
		    }
		    return 1;
		}

	};*/
}
