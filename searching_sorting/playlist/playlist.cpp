
#include <bits/stdc++.h>
using namespace std;

int unique_songs(vector<int> &arr, int n){
    unordered_set<int> songs;
    int st = 0, max_len = INT_MIN;

    for(int ed = 0; ed<n; ed++){
        while(songs.count(arr[ed])){
            st++;
            songs.erase(arr[st]);
        }
        songs.insert(arr[ed]);
        max_len = max(max_len, ed - st + 1);
    }




    return max_len;
}

int main() {

     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    vector<int> arr(n); for(int i = 0; i<n; i++) cin>>arr[i];

    cout<<unique_songs(arr, n)<<endl;
    return 0;

}
