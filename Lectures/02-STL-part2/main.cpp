// Given N strings print count of them in lexological order
// s.length 100
// N = 1^5


// Given an array of length N sort it without using any sorted algorithm
// N = 1^5


// Given an array of length N and remove duplicates
// N = 1^5


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

	// max computation 10^8
	// ordered map 
	// They are implemented using red black trees
	// insert, get, find  O(log(n))
	// map<dtype,dtype>
	// map<string,int> m;
	// m["saad"] = 100;
	// m["ahmad"] = 50;
	// m["ahmad"] = 90;

	// for(auto &x:m){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }



	// unordered map 
	// They are implemented using hash tables
	// insert, get, find  O(1)
	// unordered_map<dtype,dtype>
	// unordered_map<string,int> m;
	// m["saad"] = 100;
	// m["ahmad"] = 50;

	// for(auto &x:m){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	// ordering , Frequency
	// map<string,int> m;
	// map<string,int>:: iterator it;
	// ll n;
	// cin>>n;
	// while(n--){
	// 	string s;
	// 	cin>>s;
	// 	m[s]++;
	// }

	// auto it=m.find("saad"); // returns an iterator
	// m.erase(it);
	// m.clear();
	// for(auto &x:m){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }


	// multimap

	// multimap<string,int> m;
	// m["saad"] = 100;
	// m["ahmad"] = 50;
	// m["ahmad"] = 90;
	// for(auto &x:m){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }

	// SETS 

	// ordered set
	vector<int> v= {6,2,1,99,100,4,5,7,8,7,8,11};
	// vector<int> res;
	// set<int> s;
	// for(auto &i:v){
	// 	s.insert(i);
	// }

	// for(auto i:s){
	// 	cout<<i<<endl;
	// }


	set<int> s;
	for(auto &i:v){
		s.insert(i);
	}

	for(auto i:s){
		cout<<i<<endl;
	}

	auto it = s.find(101);
	// returns end() iterator
	if(it !=s.end())
	s.erase(it);
	for(auto i:s){
		cout<<i<<endl;
	}


	return 0;
}