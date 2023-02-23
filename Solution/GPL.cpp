#include<iostream>
using namespace std;
int main() {
	long long int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		string binaryNum;
		cin >> binaryNum;
		long long int base = 1,decimalValue=0;
		int i = 1;
		while (i<=n) {
			char c = binaryNum[n - i];
			int cc = (int)c - 48;
			decimalValue += (cc * base);
			base *= 2;
			i++;
		}
		cout << decimalValue << "\n";
 }
return 0;
}
