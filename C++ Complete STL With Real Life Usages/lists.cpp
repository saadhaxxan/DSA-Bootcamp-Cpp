// GitHub 	samsorrahman
#include <iostream>
#include <list>

using namespace std;

void print(const list<int> &my_list)
{
	cout << "List content: {  ";
	for (const int &num : my_list)
		cout << num << "  ";
	cout << "}\n\n";
}

int main()
{
	list<int> numbers;
	int value = 0;

	cout << "Pushing back...\n";
	while (value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;
		if (value >= 0)
			numbers.push_back(value);
	}
	print(numbers);

	value = 0;
	cout << "Pushing front...\n";
	while (value >= 0)
	{
		cout << "Enter number: ";
		cin >> value;
		if (value >= 0)
			numbers.push_front(value);
	}
	print(numbers);

	return 0;
}
