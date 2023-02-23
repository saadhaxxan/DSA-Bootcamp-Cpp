#include <iostream>
#include<vector>
#include<set>
using namespace std;
void fun(int arr[], int n) {
    vector<int> v;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            v.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            v.push_back(arr[i]);
        }
    }
    for (auto& i : v) {
        cout << i << " ";
    }
}
int main() {
    int arr[5] = { 6,5,2,-1,-4 };
    fun(arr, 5);

    return 0;
}
