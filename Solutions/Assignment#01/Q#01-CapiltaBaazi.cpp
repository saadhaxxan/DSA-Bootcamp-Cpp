//Problem Source: https://www.hackerearth.com/problem/algorithm/capitalbaazi/
//Accpted Solution
#include<iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string s;
    vector<string> v;
    int start = 0;
    getline(cin, s);
    int l = s.length();
    for (int i = 0; i < l ; i++)
    {
        if (s[i] == ' ')
        {
            v.push_back(s.substr(start, i - start));
            start = i+1;
        }
        else
            s[i] = s[i] - 32;
    }
    v.push_back(s.substr(start));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
