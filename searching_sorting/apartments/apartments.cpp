#include <bits/stdc++.h>
using namespace std;
 
int max_allocated_apartments(vector<int>& applicants, vector<int>& apartments, int n, int m, int k) {
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
 
    int i = 0, j = 0, count = 0;
    while (i < n && j < m) {
        if (abs(applicants[i] - apartments[j]) <= k) {
            count++;
            i++;
            j++;
        } 
        else if (apartments[j] < applicants[i] - k) {
            j++; 
        } 
        else {
            i++; 
        }
    }
    return count;
}
 
int main() {
   
 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> applicants(n), apartments(m);
    for (int i = 0; i < n; i++) cin >> applicants[i];
    for (int i = 0; i < m; i++) cin >> apartments[i];
 
    cout << max_allocated_apartments(applicants, apartments, n, m, k) << endl;
    return 0;
}