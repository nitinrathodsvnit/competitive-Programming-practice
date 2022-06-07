#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin>>n;
    n = 2*n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    string st;
    cin>>st;
    int frq[26]={0};
    for(int i=0; i<n; i++){
        frq[st[i]-'a']++;
    }
    for(int i=0; i<n; i++){
        
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}