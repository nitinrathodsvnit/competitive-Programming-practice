#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    vector<int> first(n);
    for (int i = 0; i < n; i++)
    {
        cin >> first[i];
    }
    sort(first.begin(), first.end());
    vector<int> sec = first;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (first[i] != sec[i])
        {
            ans &= first[i];
        }
    }
    cout << ans << "\n";
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