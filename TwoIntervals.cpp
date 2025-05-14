#include "./bits/stdc++.h"
#define int long long
using namespace std;

void solve(){
    int n,even=0, odd=0, pos=0, neg=0;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>> a[i];
        if(a[i]>-1)
            pos++;
        else
            neg++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<"Even: " << even<<endl;
    cout<<"Odd: " << odd<<endl;
    cout<<"Positive: " << pos<<endl;
    cout<<"Negative: " << neg<<endl;


    

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