#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (auto &character : s) {
		if (character == ' ') {
			cout << "\n";
		}
		else {
			cout << (char)toupper(character);
		}
		
	}
}
