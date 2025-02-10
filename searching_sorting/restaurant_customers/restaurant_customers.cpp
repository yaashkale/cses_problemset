#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//2 3 5
//4 8 9
int max_customers(vector<int> &arrival, vector<int> &leave, int n) {
   sort(arrival.begin(), arrival.end());
   sort(leave.begin(), leave.end());

   int pt1 = 0, pt2 = 0, count = 0, max_count = INT_MIN;
   while(pt1 < n && pt2 < n){
    if(arrival[pt1] < leave[pt2]){
        count++;
        max_count = max(max_count,count);
        pt1++;
    }
    else{
        count--;
        pt2++;
    }
   }
   return max_count;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> arrival;
    vector<int> leave;

    for(int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;

        arrival.push_back(a);
        leave.push_back(b);
    }


    int ans = max_customers(arrival, leave, n);
    
    cout<<ans<<endl;
   
    return 0;
}
