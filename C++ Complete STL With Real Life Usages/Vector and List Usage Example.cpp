// GitHub ->samsorrahman

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>

using namespace std;

// #define USE_VECTOR
#define USE_LIST

class guest
{
public:
	guest() {}
	~guest() {}
	void set_gender(string in)
	{
		char i = in.c_str()[0];
		if (i == 'b' || i == 'B' || i == 'm' || i == 'M')
			gender = "Boy";
		else
			gender = "Girl";
	}
	string name;
	string gender;
	int age;
};

#ifdef USE_VECTOR
typedef vector<guest> my_container;
#elif defined USE_LIST
typedef list<guest> my_container;
#endif

void read_file(my_container *my_guests)
{
	string in_str;
	ifstream in_file("my_guests.txt");
	if (in_file.is_open())
	{
		guest temp;
		while (getline(in_file, in_str))
		{
			temp.name = in_str;
			getline(in_file, in_str);
			temp.set_gender(in_str);
			getline(in_file, in_str);
			temp.age = stoi(in_str);
			my_guests->push_back(temp);
		}
		in_file.close();
	}
	else
		cout << "Unable to open file!\n\n";
}

void print_guests(my_container *my_guests)
{
	auto it = my_guests->begin();

	cout << "-- Container Content Start --\n";
	cout << "-----------------------------\n";
	while (it != my_guests->end())
	{
		cout << "Name: " << it->name << endl;
		cout << "Gender: " << it->gender << endl;
		cout << "Age: " << it->age << endl;
		cout << "-----------------------------\n";
		it++;
	}
	cout << "--  Container Content End  --\n";
}

int main()
{
	my_container *my_guests = new my_container;
	read_file(my_guests);
	print_guests(my_guests);
	return 0;
}
