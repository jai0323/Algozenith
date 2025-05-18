#include "./bits/stdc++.h"
#define int long long
using namespace std;




void solve(){
      
       int n;
        cin >> n;
        int jumps = n-1;
        int print=1;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < jumps; j++)
                cout<<" ";
            for(int k = 0; k < print; k++)
                cout<<"*";

                
            print+=2;
            jumps--;
            cout<<endl;
        }
       
       jumps = 0;
       print-=2;
   
       for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < jumps; j++)
                cout<<" ";
            for(int k = 0; k < print; k++)
                cout<<"*";

            
            print-=2;
            jumps++;
            cout<<endl;
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