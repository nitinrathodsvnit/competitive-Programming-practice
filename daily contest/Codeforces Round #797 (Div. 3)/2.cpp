#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int ans[n];
    cout<<b[0] - a[0]<<" ";
    for(int i=0; i<n; i++){
        cout<<b[i]-max(b[i-1], a[i])<<" ";
    }cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}