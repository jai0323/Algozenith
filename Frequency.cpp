#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      
       int n,m;
       cin >> n >> m;
       int A[n];
       for(int i = 0; i < n; i++) cin >> A[i]; 
       
       int pt1=0, pt2=1;
       
       while(pt2 <= m){
        int f=0;
        pt1=0;
        while(pt1 < n){
            if(A[pt1] == pt2)
             f++;

            pt1++;
        }
        pt2++;
        cout<< f << "\n";
       }
}



signed main() {
    // breaking link between cin & scanf and cout & printf for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t = 1;
    
    cin >> _t;
    while(_t--){
        solve();
    }

    return 0;
}