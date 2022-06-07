#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int ans = b*b - 4*a*c;
    if(ans%1000 >=0){
        cout<<"YEs\n";
    }
    else{
        cout<<"NO\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}