#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(max(a, c)>min(b, d)){
        cout<<max(a, c)<<"\n";
    }
    else{
        cout<<a+c<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}