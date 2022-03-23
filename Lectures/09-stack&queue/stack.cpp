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

// imagine a stack with 5 elements
class Stack{
public:
	int *arr;
	int top;
	int size;

	Stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element){
		if (size-top>1){
			top++;
			arr[top] = element;
		}
		else{
			cout<<"Stack overflowed"<<endl;
		}
	}
	void pop(){
		if (top>=0){
			top--;
		}
		else{
			cout<<"Stack Underflow"<<endl;
		}
	}
	bool isEmpty(){
		if (top==-1){
			return true;
		}
		else{
			return false;
		}
	}

	int peek(){
		if (top>=0){
			return arr[top];
		}
		else{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
	}
};



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Using STL
	// stack<int> s;
	// s.push(5);
	// s.push(4);
	// s.push(3);
	// s.push(11);
	// s.push(12);
	// cout<<s.size()<<endl;
	// s.pop();
	// cout<<s.size()<<endl;
	// s.pop();
	// cout<<s.size()<<endl;
	// cout<<s.empty()<<endl;


	// Custom Stack

	Stack s(5);
	s.push(11);
	s.push(12);
	s.push(14);
	s.push(17);
	s.push(18);
	cout<<s.peek()<<endl;
	s.pop();
	cout<<s.peek()<<endl;
	if (s.isEmpty()){
		cout<<"Stack is empty mere dost"<<endl;
	}
	else{
		cout<<"Stack is not empty mere dost"<<endl;
	}
	return 0;
}