#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      
       int n;
       cin >> n;
       int arr[n];
       for(int i = 0; i < n; i++) cin >> arr[i];

       int ans  = 0, count = 1;
       
       for(int i = 1; i < n; i++){
        if(arr[i]<arr[i-1]){
            ans = i*(i+1)/2;
        }

    }
    cout << ans << endl;
}



signed main() {
    // breaking link between cin & scanf and cout & printf for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t = 1;
    
    // cin >> _t;
    while(_t--){
        solve();
    }

    return 0;
}