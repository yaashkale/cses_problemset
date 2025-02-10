#include<bits/stdc++.h>
using namespace std;
//1 2 2 6 9 9 50

long long missing_coin_sum(vector<int> &arr, int n ){
	sort(arr.begin(), arr.end());
	long long smallest_sum = 1;

	for(int coin: arr){
		if(coin > smallest_sum) break;
		smallest_sum += coin;
	}
	return smallest_sum;
}
int main(){
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

    cout<<(long long) missing_coin_sum(arr, n)<<endl;
    return 0;
}