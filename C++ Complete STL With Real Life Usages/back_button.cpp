// Back Button
// stack usage example
// Github -> samsorrahman

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> back_stack;
	string temp;

	while (temp != "exit")
	{
		cout << "[1] Visit URL   [2] Back" << endl;
		cin >> temp;
		if (temp == "exit")
			break;
		if (temp == "1")
		{
			cout << "Enter URL: ";
			cin >> temp;
			back_stack.push(temp);
		}
		else if (temp == "2")
		{
			cout << "Going back...\n";
			back_stack.pop();
		}
		if (back_stack.empty())
			break;
		cout << "Current URL: " << back_stack.top() << endl;
	}
	return 0;
}
