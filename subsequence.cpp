#include "./bits/stdc++.h"
#define int long long
using namespace std;

void isSubsequence(int A[], int B[], int n, int m){
    int pt1 = 0, pt2 = 0;

    while(pt1 < n && pt2 < m){
        if(A[pt1] == B[pt2]){ 
            pt2++;
        }
        pt1++;

    }

    if(pt2 == m) cout<< "YES\n";
    else cout<< "NO\n";

}


void solve(){
      
       int n,m;
       cin >> n >> m;
       int A[n], B[m];
       for(int i = 0; i < n; i++) cin >> A[i]; 
       for(int i = 0; i < m; i++) cin >> B[i]; 

       isSubsequence(A,B,n,m);
      
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