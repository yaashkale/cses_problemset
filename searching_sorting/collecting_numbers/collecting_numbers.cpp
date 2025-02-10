
#include <bits/stdc++.h>
using namespace std;

int min_rounds(int n, vector<int> &arr) {
    vector<int> pos(n + 1); 
  
    for (int i = 0; i < n; i++) {
        pos[arr[i]] = i;
    }

    int rounds = 1;  
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) { 
            rounds++; 
        }
    }

    return rounds;
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

    cout << min_rounds(n, arr) << endl;
    return 0;
}
