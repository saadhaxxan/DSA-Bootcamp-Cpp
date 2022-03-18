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

// Operators

/* AND
a 	b 	a & b
0   0   0
0   1   0
1   0   0 
1   1   1

Properties
1. AND with 1 digits will remain the same

OR
a 	b 	a | b
0   0   0
0   1   1
1   0   1 
1   1   1

XOR
a 	b 	a ^ b
0   0   0
0   1   1
1   0   1 
1   1   0

Properties
1. XOR with 1 will return 0
2. XOR with 0 will return the number itself

Left shift
<<
10
1010 = 1<0<1<0<0
10100 = 20

Left shift any number a with 1 it will return 2(a)
a<<b = a*2powb
2<<4 = 2*(2*2*2*2) = 32

Right Shift
>>
10
1010 = 1>0>1
Right shift any number a with 1 it will return a/2
a>>b = a/2powb

Masking
in future
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n = 1000000000;
	// binary 1010 -> LSB = 0 = even or LSB = 1 = Odd
	// 1011
	// 0001
	// 0001
	// if(n&1 == 1){
	// 	cout<<"Odd"<<endl;
	// }
	// else{
	// 	cout<<"Even"<<endl;
	// }

	// Prime Numbers and Divisibility
	// v1
	// int cnt=0;
	// for(int i=1;i<=n/2;i++){ // n number of comparisons O(n)
	// 	if (n%i==0){
	// 		cnt++;
	// 	}
	// }
	// if(cnt==2){
	// 	cout<<"Prime"<<endl;
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;
	// }

	// v2
	// int cnt=0;
	// for(int i=2;i<=n/2;i++){ // n/2 number of comparisons O(n/2)
	// 	if (n%i==0){
	// 		cnt++;
	// 	}
	// }
	// if(cnt==1){
	// 	cout<<"Prime"<<endl;
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;
	// }


	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){ // O(sqrt(n)) number of comparisons O(sqrt(n))
		if (n%i==0){
			cnt++;
		}
	}
	if(cnt==1){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}

	// Sieve Of Erathothenes
	// Pre Computation & Hashing
	return 0;
}



