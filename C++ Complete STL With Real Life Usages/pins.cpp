// GitHub -> samsorrahman

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<pair<int, int>, string> pins;
	int temp = 0;
	string str;
	pair<pair<int, int>, string> p;
	pair<int, int> landmark;

	cout << "Inserting...\n";
	while (temp >= 0)
	{
		cout << "Enter latitude: ";
		getline(cin, str);
		temp = stoi(str);
		if (temp >= 0)
		{
			landmark.first = temp;
			cout << "Enter longitude: ";
			getline(cin, str);
			temp = stoi(str);
			landmark.second = temp;
			p.first = landmark;
			cout << "Enter name: ";
			getline(cin, str);
			p.second = str;
			pins.insert(p);
		}
	}

	cout << "{   ";
	for (auto it = pins.begin(); it != pins.end(); it++)
		cout << it->first.first << "," << it->first.second << "->" << it->second << "   ";
	cout << "}\n";

	return 0;
}
