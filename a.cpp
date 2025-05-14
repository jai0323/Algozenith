#include "./bits/stdc++.h"
#define int long long
using namespace std;

void solve(){
   int a,b;
   cin >> a >> b;
   cout << a << " + " << b << " = " << (a + b) << "\n";
   cout << a << " * " << b << " = " << (a * b) << "\n";
   cout << a << " - " << b << " = " << (a - b) << "\n";

}

signed main() {
    // breaking link  between cin &scanf and  cout & printf for fast I/O
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
