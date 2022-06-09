#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n,k, ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        ans += (a[i]/k);
        a[i]%=k;
    }
    multiset<int> ml;
    for(int i=0; i<n; i++){
        ml.insert(a[i]);
    }
    sort(ml.begin(), ml.end());
    int tm;
    for(int i=0; i<n; i++){
        tm = k - a[i];
        auto ele = ml.find(a[i]);
        if(ele!=ml.end()){
            ml.erase(ele);
            auto lw = ml.lower_bound(tm);
            if(lw!=ml.end()){
                int temp = *lw;
                ml.erase(ml.find(temp));
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}