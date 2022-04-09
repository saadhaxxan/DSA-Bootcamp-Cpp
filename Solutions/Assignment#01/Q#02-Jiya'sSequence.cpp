//Problem Source: https://www.hackerearth.com/problem/algorithm/jiyas-sequence/
//Accepted Solution
#include<iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> v;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum =1;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            sum *= input;
        }
        sum = sum % 10;
        if (sum == 2 || sum == 5 || sum == 3)
            v.push_back("YES");
        else
            v.push_back("NO");
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
