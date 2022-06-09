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
    int pre=a[0]-b[0], nw;
    for(int i=1; i<n; i++){
        nw = a[i] - b[i];
        if(nw<0 or pre<0 or nw!=pre){
            cout<<"NO\n";
            return;
        }
        
    }
    cout<<"YES\n";
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}