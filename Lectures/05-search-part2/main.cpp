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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v= {3,6,7,9,12,88,167,999,1110,4445,7000};
	sort(v.begin(),v.end(),greater<int>());
	// for(auto x:v)cout<<x<<endl;
	int t=999;
	int start = 0;
	int end = v.size() -1;
	bool isAsc = v[0]<v[v.size()-1];
	// cout<<isAsc<<endl;
	// int mid = start + ((end-start)/2) // independent
	while(start<=end){
		int mid = (start+end)/2; //it depends on size of array

		if (t==v[mid]){
			cout<<mid<<endl;
			break;
		}

		if (isAsc){
			
			if (t<v[mid]){
				end = mid -1;
			}
			else{
				start = mid+1;
			}
		}
		else{
			if (t>v[mid]){
				end = mid -1;
			}
			else{
				start = mid+1;
			}
		}
	}
	return 0;
}