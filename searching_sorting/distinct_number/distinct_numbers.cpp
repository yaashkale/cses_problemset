#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int distinct_values(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int count = 1; 

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    return count;
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
