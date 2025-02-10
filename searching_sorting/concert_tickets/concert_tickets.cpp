#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> concert_tickets(multiset<int>& tickets, vector<int>& cust_max_price, int n, int m) {
    vector<int> ans;
    for (int price : cust_max_price) {
        auto it = tickets.upper_bound(price);
        if (it == tickets.begin()) {
            ans.push_back(-1);
        } else {
            --it;
            ans.push_back(*it);
            tickets.erase(it);
        }
    }
    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    vector<int> cust_max_price(m);  
    for (int i = 0; i < m; i++) {
        cin >> cust_max_price[i];
    }

    vector<int> ans = concert_tickets(tickets, cust_max_price, n, m);
    for (int x : ans) {
        cout << x << endl;
    }
    return 0;
}
