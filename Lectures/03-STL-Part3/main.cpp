#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define mod 1000000007
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)

using namespace std;

// This is a comparator
bool greater(auto x,auto y){
		return x>y;
	}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// STL ALgorithms
	// min_element (returns iterator or pointer of minimum element)
	// max_element (returns iterator or pointer of maximum element)

	// vector<int> v = {4,2,3,4,5,6,7,8,7,8,9};
	// int arr[10] = {4,2,3,4,5,6,7,8,7,8};
	// int n =10;

	// auto it = min_element(arr,arr+n); // O(log(n))
	// cout<<(*it)<<endl;
	

	// auto it2 = max_element(v.begin(),v.end()); // O(log(n))
	// cout<<(*it2)<<endl;

	// auto sum = accumulate(arr,arr+n,0);
	// cout<<sum<<endl;

	// auto count1 = count(v.begin(),v.end(),6);
	// cout<<(count1)<<endl;

	// (1,2,3,4,9,11,2)
	// int k=4;
	// int j=11-k;
	// reverse 
	// sort(v.begin()+k,v.end());
	// reverse(v.begin(),v.end()-j);

	// string s= "saadhassan";
	// reverse(s.begin()+4,s.end());
	// for (auto &val:s){
	// 	cout<<val;
	// }

	// [](int x,int y){return x+y;};

	// auto sum = [](int x,int y){return x+y;};
	// cout<<sum(2,4)<<endl
	
	// comparator
	// greater<int>() this is a comparator
	// sort(v.begin(),v.end(),greater<int>());

	// all_of() returns 0 if any condition is not matched
	// any_of() returns 0 if any one condition is not matched
	// none_of() returns 0 if any condition is matched

	return 0;
}


// Next Week 
// ceil k== > arr[m] != arr[m+1]
// floor k< > arr[m-1]
// Prime Numbers and divisibilty
// Modular Arithmatic 
// Combinatorics Npr Ncr
// Sequence and Series

