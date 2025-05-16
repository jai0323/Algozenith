#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      double x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            cout << "Origem" << "\n";
        } else if (x == 0) {
            cout << "Eixo Y" << "\n";
        } else if (y == 0) {
            cout << "Eixo X" << "\n";
        } else {
            if (x > 0 && y > 0) {
                cout << "Q1" << "\n";
            } else if (x < 0 && y > 0) {
                cout << "Q2" << "\n";
            } else if (x < 0 && y < 0) {
                cout << "Q3" << "\n";
            } else {
                cout << "Q4" << "\n";
            }
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