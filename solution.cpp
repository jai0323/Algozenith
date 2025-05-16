#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      char s;
        cin>>s;
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
       
       
       
        for (int i = 0; i < n; i++) {
            for(int j=0;j<A[i];j++){
                cout<<s;
            }

            cout<<endl;
        }
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