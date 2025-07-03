#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      
    int  n;
     cin >> n;
    char a[n][n];

    for(int i=0; i<n; i++)
        for(int j=0;j<n; j++)
            cin >> a[i][j];

    int x,y;
    cin >> x >> y;
    

    if(a[x][y-1]=='x' && a[x][y+1]=='x' && a[x+1][y+1]=='x' && a[x+1][y-1]=='x' && a[x-1][y-1]=='x' && a[x-1][y+1]=='x' && a[x-1][y]=='x' && a[x+1][y]=='x')
     cout << "yes" << endl;
    else
     cout << "no" << endl;

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