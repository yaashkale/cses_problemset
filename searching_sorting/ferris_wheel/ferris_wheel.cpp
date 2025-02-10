#include <bits/stdc++.h>
using namespace std;
 // | 5 7 | 8 | 8 |8 | 8|  9|  9|  10|  10| 
 // |10 5|8 7| 8| 8| 8| 9 | 9 | 10

// 5 7 8 8 8 8 9 9 10 10
// 10 10 9 9 8 8 8 8 7 5

// |5 10| 10 | 9 | 9| 8 7| 8| 8| 8 
int ferris_wheel(vector<int>& children, int &n, int &x) {
   sort(children.begin(),children.end());
   int a = 0, b = n-1,count = 0;
   while(a<=b){
    if(children[a] + children[b] <= x){
        a++;
        
    }
    b--;
    count++;
   }
   return count;

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int n, x;
    cin >> n >> x ;
    
    vector<int> children(n);
    for (int i = 0; i < n; i++){cin>>children[i];}
    
 
    cout << ferris_wheel(children,n, x) << endl;
    return 0;
}