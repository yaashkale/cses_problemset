#include <bits/stdc++.h>
using namespace std;
/*
2 0
7 1
5 2
1 3


*/
pair<int, int> two_sum(vector<int> &arr, int n, int x){
    map<int, int> mpx;
    for(int i = 0; i<n; i++){
        int compliment = x - arr[i];
        if(mpx.find(compliment) != mpx.end()){
            return {mpx[compliment], i};
        }
        mpx[arr[i]] = i;
    }
    return {-1, -1};
}

int main() {
   
 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    pair<int, int> ans = two_sum(arr, n, x);
    if(ans.first != -1 && ans.second != -1){
        cout<<ans.first+1<<" "<<ans.second+1<<endl;
        
    }
    else cout<<"IMPOSSIBLE"<<endl;

    
   
}