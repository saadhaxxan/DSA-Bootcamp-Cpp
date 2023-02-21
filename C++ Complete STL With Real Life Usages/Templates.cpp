// GitHub -> samsorrahman

#include <iostream>
using namespace std;

template <typename T>
int size_in_bits(const T &a)
{
   return sizeof(a) * 8;
}

int main()
{
   cout << size_in_bits(21) << endl;
   cout << size_in_bits('f') << endl;
   cout << size_in_bits(32.1f) << endl;
   cout << size_in_bits(32.1) << endl;
   return 0;
}
