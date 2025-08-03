#include <bits/stdc++.h>
using namespace std;


bool isBalanced(string s, int l, int r) {
    int n= s.size();
    if(l > r) return false; // Invalid range
    int depth = 0;
    for(int i = l; i <= r; i++) {
        char c = s[i];
        if(c == '(') {
            depth++;
        } else if(c == ')') {
            depth--;
        }
        if(depth < 0) return false; // More closing than opening
    }   
    return true;
}

int solve(){
    string s;
    int q;
    cin >> s;
    cin >> q;

    while(q--) {
        int l, r;
        cin >> l >> r;
        

        if(isBalanced(s, l, r)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << "END OF QUERIES" << endl;

    return 0;

}

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    // cin >> t;
    while(t--){ 
        solve();
    }

    return 0;
}