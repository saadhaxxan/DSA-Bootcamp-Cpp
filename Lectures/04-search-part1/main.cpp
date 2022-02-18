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

// Linear Searching
// 1,4,5,7,8,11,45,67,89,90,45,12,34 O(N) worst case
// O(1) best case


// N = 1 million
// 1 billion 10^9
// 10^8 or 10^9 operations limit

// Binary Search O(log(N))
// Order Agnostic BS
// sort(a,a+n);
// SORTED array

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// vector<int> v={1,4,5,7,8,11,45,67,89,90,45,12,34};
	// int target = 155;
	// bool flg=false;
	// for(int i=0;i<v.size();i++){
	// 	if(v[i]==target){
	// 		flg=true;
	// 	}
	// }
	// if (flg){
	// 	cout<<"Found"<<endl;
	// }
	// else{
	// 	cout<<"Not Found"<<endl;
	// }


	// string name="Saad";
	// char c = 'g';
	// for(int i=0;i<name.size();i++){
	// 	if(name[i]==c){
	// 		flg=true;
	// 	}
	// }
	// if (flg){
	// 	cout<<"Found"<<endl;
	// }
	// else{
	// 	cout<<"Not Found"<<endl;
	// }

	// Find Max or Min element in an array
	// Brute force approach O(N)
	vector<int> v={1,4,5,7,8,11,45,67,89,90,45,12,34};
	int min = v[0];
	int max = v[0];
	for(int i=0;i<v.size();i++){
		if(v[i]>max){
			max = v[i];
		}
	}
	cout<<"Max elem is "<<max<<endl;

	// Better Approach O(Log(N))
	int n=v.size();
	sort(v.begin(),v.end()); // O(Log(N)) 
	cout<<v[0]<<endl; 
	cout<<v[n-1]<<endl;

	return 0;
}