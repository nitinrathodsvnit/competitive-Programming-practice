#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int ans = min(abs(a[0]-a[1]), a[2] - abs(a[0]-a[1]));
    cout<<ans<<"\n";
    
}


int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}