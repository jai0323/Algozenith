#include <./bits/stdc++.h>
#define int long long
using namespace std;

void solve(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    stack<int> s;

    int nge[n];

    for(int i = 0; i < n; i++){

        while(!s.empty() && arr[s.top()] < arr[i]){
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){
        nge[s.top()] = n; // No greater element found
        s.pop();
    }

    for(int i = 0; i < n; i++){
        cout << nge[i] << " ";
    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); 
    cin.tie(NULL);

    int _t=1;
    // cin >> _t;

    while(_t--){
        solve();
    }
    return 0;
}