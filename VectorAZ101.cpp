#include <./bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;

void solve(){

   int n;
   cin >> n;
   vector <int> v(n);
   int mul=1;

    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    mul = (v[i]* mul)%mod; 
    }

 
   cout << mul <<"\n";


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t=1;

    cin>>_t;

    while(_t--){
        solve();
    }
    return 0;
}