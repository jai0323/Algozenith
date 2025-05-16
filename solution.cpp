#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      int n,x;
      bool f=false;
      cin>> n;
      int arr[n];
      for(int i=0; i<n;i++){
        cin>> arr[i];
      }
      cin>>x;

      for(int i=0; i<n;i++){
        if(x==arr[i]){
            cout<<i;
            f=true;
            break;
        }
      }
      if(!f){
        cout<<-1;
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