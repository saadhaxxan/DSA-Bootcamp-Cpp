//Problem Source https://www.hackerearth.com/problem/algorithm/gpl/
//Accepted solution

#include<iostream>
#include <vector>
#include <string>
#define ll long long int

using namespace std;

ll power(ll a,ll b) {
    ll pow = 1;
    for (ll i = 0; i < b; i++)
        pow *= a;
    return pow;
}
int main()
{
    vector<ll> v;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        string input;
        cin >> input;
        for (ll j = 0; input[j] != '\0'; j++)
            sum += (power(2, n - j - 1) * (input[j] - 48));
        v.push_back(sum);
    }
    for (ll i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
