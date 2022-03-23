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


// Recursion is when a function calls itself untill a base condition is meet.
void print(int n){
	if (n==5){
		return;
	}
	print(n+1); // recurrence relation
	cout<<"Saad"<<endl;
	// {
	// print(n+1); // recurrence relation
	// cout<<"Saad"<<endl;
	// } // Backtracking

	// cout<<"Saad"<<endl;
	// print(n+1); // recurrence relation
}

// factorial  = 5->1 = 5*4*3*2*1
// factorial(0) = 1
// factorial(1) = 1
// recurrence relation = n * (n-1)
int factorial(int n){
	if (n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}

// 1 1 2 3 5 8 13 21 
// fibonacci  = 5 = 
// fibonacci(0) = 1
// fibonacci(1) = 1
// recurrence relation = (n-1) + (n-2) 
int fibonacci(int n){
	if (n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return (fibonacci(n-1)) + (fibonacci(n-2));
	}
	// multiple recursion
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int n=0;
	for (int i=0;i<5;i++){
		cout<<fibonacci(i);
	}
	

	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// cout<<"Saad"<<endl;
	// int n=0;
	// while(n<10){
	// 	print();
	// 	n++;
	// }

	// print();
	// print();
	// print();
	// print();
	// print();

	return 0;
}








