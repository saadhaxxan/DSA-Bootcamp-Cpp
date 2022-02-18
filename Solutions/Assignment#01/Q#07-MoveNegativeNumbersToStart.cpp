//Problem Source:https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
#include<vector>
using namespace std;

void InPlaceReArrangment(vector<int>& v)
{
    auto s = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            swap(*s, v[i]);
            s++;
        }
    }
}
int main() {
    int n;
    vector<int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        s.push_back(input);
    }
    InPlaceReArrangment(s);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << "\t";
    }
}
