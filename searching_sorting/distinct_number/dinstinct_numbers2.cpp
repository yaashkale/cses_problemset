#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int distinct_values(vector<int>& arr) {
    unordered_set<int> unset(arr.begin(), arr.end());
    return unset.size();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << distinct_values(arr) << endl;

    return 0;
}
