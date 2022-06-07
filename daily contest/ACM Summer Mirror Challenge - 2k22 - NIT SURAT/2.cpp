#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int f(vector<int>& v){
    if (v.size() == 0) 
        return 0;
 
    std::vector<int> tail(v.size(), 0);
    int length = 1; 
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<f(arr);
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}