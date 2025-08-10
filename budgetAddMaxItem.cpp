#include <bits/stdc++.h>
using namespace std;


void solve(){
     int n, budget;
    cin >> n >> budget;
    int prices[n];
    for( int i=0; i<n; i++){
     cin >> prices[i];
    }
    sort(prices, prices+n);

    int prefix[n+1]{0};
    for(int i=0; i<n; i++) {
        prefix[i+1] = prefix[i] + prices[i];
    }

    auto index = upper_bound(prefix, prefix + n + 1, budget)-prefix;
    cout<< index - 1  << endl;
   
}

signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t=1;

    cin >> _t;

    while(_t--){
        solve();
    }
   

    return 0;
}