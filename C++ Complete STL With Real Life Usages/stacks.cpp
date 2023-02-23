// GitHub -> samsorrahman
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> numbers;
	int temp;

	cout << "Pushing...\n";
	while (temp >= 0)
	{
		cout << "Enter numbers: ";
		cin >> temp;
		if (temp >= 0)
			numbers.push(temp);
	}

	cout << "{  ";
	while (numbers.size() > 0)
	{
		cout << numbers.top();
		numbers.pop();
		cout << "  ";
	}
	cout << "}";

	return 0;
}
