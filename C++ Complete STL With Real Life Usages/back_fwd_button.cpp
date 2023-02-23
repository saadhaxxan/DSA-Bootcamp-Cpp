// Back and Forward Buttons
// stack usage challenge
// GitHub -> samsorrahman

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> back_stack;
	stack<string> fwd_stack;
	string temp;

	while (temp != "exit")
	{
		cout << "[1] Visit URL   [2] Back    [3]Forward" << endl;
		cin >> temp;
		if (temp == "exit")
			break;
		if (temp == "1")
		{
			cout << "Enter URL: ";
			cin >> temp;
			back_stack.push(temp);
			fwd_stack = stack<string>();
		}
		else if (temp == "2")
		{
			cout << " Going back..." << endl;
			fwd_stack.push(back_stack.top());
			back_stack.pop();
		}
		else if (temp == "3")
		{
			if (fwd_stack.empty())
				cout << "No forward history!" << endl;
			else
			{
				cout << "Going forward... " << endl;
				back_stack.push(fwd_stack.top());
				fwd_stack.pop();
			}
		}
		if (back_stack.empty())
			break;
		cout << "\nCurrent URL: " << back_stack.top() << endl;
	}

	return 0;
}
