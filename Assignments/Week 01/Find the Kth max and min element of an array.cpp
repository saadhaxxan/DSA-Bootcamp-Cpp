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
	//Find the Kth max and min element of an array
	vector<int> v = {2,3,4,1,10,13,2,45,33};
	sort(v.begin(), v.end());
	for(auto i:v){
		cout<<i<<", ";
	}
	cout<<endl;
	//k = 4
	int i = v.size(), k = 4;
	cout<<v[k]<<endl;
	cout<<v[i-k]<<endl;

}
