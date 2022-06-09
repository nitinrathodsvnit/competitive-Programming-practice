#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n, k, ans=0, mn = INT_MAX;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        ans = 0;
        for(int j=0; j<k and j<n; j++){
            if(s[i]=='W'){
                ans++;
            }
        }
        mn = min(ans, mn);
    }
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}