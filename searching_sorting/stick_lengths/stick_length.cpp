#include<bits/stdc++.h>
using namespace std;



long long stick_lengths(int n , vector<int> & arr){
    sort(arr.begin(), arr.end());
    long long  median = arr[n/2];
    long long cost = 0;
    for(int i = 0; i<n; i++){
        cost += abs(median - arr[i]);
    }
    return cost;
}
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<stick_lengths(n, arr);
    return 0;
}
