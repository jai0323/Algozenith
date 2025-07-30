#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, budget,q;

   n=5;
    vector<int> prices={5,3,7,2,10};
  
    sort(prices.begin(), prices.end());

    int prefix[n+1]{0};
    for(int i=0; i<n; i++) {
        prefix[i+1] = prefix[i] + prices[i];

        cout << prefix[i+1] << " ";
    }

    cout << endl;
    cin >> q;

    
    while(q--){
        int budget;
        cin >> budget;

        auto index = upper_bound(prefix, prefix + n + 1, budget)-prefix;
        cout<<"index: " << index - 1  << endl;

    }
    

    return 0;
}