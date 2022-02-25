#include<iostream>
#include<vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	int n;
	int num;
	long long int mul;
	while (T--) {
		mul = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num;
			mul = mul * num;
		}
		int lastDigit = mul % 10;
		if (lastDigit == 2 || lastDigit == 3 || lastDigit == 5) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
