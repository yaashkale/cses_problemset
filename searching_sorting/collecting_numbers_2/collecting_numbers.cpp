
#include <bits/stdc++.h>
using namespace std;

// 1 2 3 4 5
// 2 1 4 0 3
// 2 4 1 0 3
// 3 1 4 0 2   2 4 1 0 3
// 3 4 1 0 2.  2 1 4 0 3
int min_rounds_2(vector<int> &arr, vector<pair<int, int>> &exchange, int n, int m) {
    vector<int> pos(n+1);
    par<int, int> to_swap;
    for(auto it: exchange){

    }
    for(int i = 0; i<n; i++){
        pos[arr[i]] = i;
    }
    int count=0;
    for(int i = 2; i<=n; i++){
        if(pos[i] < pos[i-1]){
            count++;
        }
    }


}

int main() {

     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin>>n>>m;

    vector<int> arr(n); for(int i = 0; i<n; i++) cin>> arr[i];
    vector<pair<int, int>> exchange(m); for(int i = 0; i<m; i++) cin>>exchange[i].first; exchange[i].second;

    vector<int> ans = min_rounds_2(arr, exchange, n, m);
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;

}
