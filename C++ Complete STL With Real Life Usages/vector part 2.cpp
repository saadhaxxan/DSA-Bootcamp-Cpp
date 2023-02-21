// GitHUB -> samsorrahman

#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &my_vector)
{
	cout << "Vector content: {  ";
	for (const int &num : my_vector)
		cout << num << "  ";
	cout << "}\n\n";
}

int main()
{
	vector<int> numbers;
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
			numbers.insert(numbers.begin(), value);
	}
	print(numbers);

	int index = 0;

	cout << "Inserting by index...\n";
	while (index >= 0)
	{
		cout << "Enter index: ";
		cin >> index;
		if (index >= 0)
		{
			cout << "Enter value: ";
			cin >> value;
			numbers.insert(numbers.begin() + index, value);
		}
	}
	print(numbers);

	index = 0;

	cout << "Modifying existing elements...\n";
	while (index >= 0)
	{
		cout << "Enter index: ";
		cin >> index;
		if (index >= 0)
		{
			cout << "Enter value: ";
			cin >> value;
			numbers[index] = value;
		}
	}
	print(numbers);

	return 0;
}
