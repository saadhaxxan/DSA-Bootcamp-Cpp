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

class Queue{

public:
	int *arr;
	int size;
	int rear;
	int front;

	Queue(){
		size = 10001;
		arr = new int[size];
		front = 0;
		rear = 0;
	}

	bool isEmpty(){
		if (front == rear){
			return true;
		}
		else{
			return false;
		}
	}

	// push == enqueue in Queue
	void enqueue(int element){
		if (rear == size){
			cout<<"Queue is full"<<endl;
		}
		else{
			arr[rear] = element;
			rear++;
		}
	}

	// pop == dequeue in Queue
	int dequeue(){
		if (front == rear){
			cout<<"Queue is Empty"<<endl;
		}
		else{
			int ans = arr[front];
			arr[front] = -1;
			front++;
			if (front==rear){
				front = 0;
				rear = 0;
			}
			return ans;
		}
	}

	int qfront(){
		if (front==rear){
			return -1;
		}
		else{
			return arr[front];
		}
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Using STL 
	// queue<int> q;
	// q.push(11);
	// q.push(12);
	// q.push(14);
	// q.push(17);
	// q.push(18);
	// cout<<q.size()<<endl;
	// q.pop();
	// cout<<q.size()<<endl;

	// Custom Queue

	Queue q;
	q.enqueue(11);
	q.enqueue(12);
	q.enqueue(14);
	q.enqueue(17);
	q.enqueue(18);
	// cout<<q.size<<endl;
	cout<<q.qfront()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.qfront()<<endl;
	return 0;
}