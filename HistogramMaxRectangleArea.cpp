#include <./bits/stdc++.h>
#define int long long
using namespace std;

void solve(){

    int n;
    cin>>n;
    int height[n];

    for(int i = 0; i < n; i++){
        cin >> height[i];
    }
    
    stack<int> s;

    int pse[n]{}, nse[n]{};

    for(int i = 0; i < n; i++){
        while(!s.empty() && height[s.top()] > height[i]){
            nse[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){
        nse[s.top()] = n; // No greater element found
        s.pop();
    }

    for(int i = n-1; i >= 0; i--){
        while(!s.empty() && height[s.top()] > height[i]){
         pse[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){
     pse[s.top()] = -1; // No greater element found
        s.pop();
    }

  

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, height[i] *(nse[i] - pse[i] - 1));
    }
    cout << ans << "\n ";


}

signed  main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); 
    cin.tie(NULL);

    int _t=1;
    cin >> _t;

    while(_t--){
        solve();
    }
    return 0;
}