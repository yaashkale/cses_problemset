#include <bits/stdc++.h>
using namespace std;
/*
2 0
7 1
5 2
1 3


*/
long long max_subarray_sum(vector<int> &arr, int n){
    long long sum = 0, max_sum = LLONG_MIN;
    for(int i = 0; i<n; i++){
        sum += (long long) arr[i];
        max_sum = max(max_sum, sum);
        if(sum < 0) sum = 0;
    }
    return max_sum;
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
        cin>> arr[i];
    }

    cout<<max_subarray_sum(arr, n)<<endl;

    
   
}