#include <./bits/stdc++.h>
#define int long long
using namespace std;

void solve(){

    int arr[]={1,7,6,4,5,3,2,8,9};

    sort(arr,arr+9);

    for(int i = 0; i < 9; i++)
        cout<< arr[i] << "  ";

    // we are subtracting arr from lower bound bcoz it return pointer of the index 
    cout << "\nlower bound position => " << lower_bound(arr, arr+9, 6) - arr << endl;
    cout << "\nupper bound position => " << upper_bound(arr, arr+9, 6) - arr << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int _t=1;

    // cin >> _t;

    while(_t--){
        solve();
    }
    return 0;
}