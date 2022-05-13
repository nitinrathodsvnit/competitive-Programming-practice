#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int i, j;
    for( i=0; i<n; i++){
        for( j=0; j<m; j++){
            if(v[i][j] == 'R'){
                break;
            }
        }
    }
    i++;
    for(i; i<n; i++){
        for(int k=0; k<j; k++){
            if(v[i][k]=='R'){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES";
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