// GitHub  	samsorrahman
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	multimap<int, string> this_map;
	int temp;
	string str;
	pair<int, string> p;

	cout << "Inserting...\n";
	while (temp >= 0)
	{
		cout << "Enter key: ";
		getline(cin, str);
		temp = stoi(str);
		if (temp >= 0)
		{
			p.first = temp;
			cout << "Enter name: ";
			getline(cin, str);
			p.second = str;
			this_map.insert(p);
		}
	}

	cout << "{   ";
	for (auto it = this_map.begin(); it != this_map.end(); it++)
		cout << it->first << "->" << it->second << "   ";
	cout << "}\n";

	temp = 0;
	cout << "Removing...\n";
	while (temp >= 0)
	{
		cout << "Enter key: ";
		getline(cin, str);
		temp = stoi(str);
		if (temp >= 0)
			this_map.erase(temp);
	}

	cout << "{   ";
	for (auto it = this_map.begin(); it != this_map.end(); it++)
		cout << it->first << "->" << it->second << "   ";
	cout << "}";

	return 0;
}
