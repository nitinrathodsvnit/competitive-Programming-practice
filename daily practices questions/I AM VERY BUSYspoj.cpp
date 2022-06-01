#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; ++i)
    {
        int c, b;
        cin >> c >> b;
        a.push_back(make_pair(b, c));
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int tm = a[0].first;
    for (int i = 1; i < n; i++)
    {
        if (a[i].second >= tm)
        {
            ans++;
            tm = a[i].first;
        }
    }
    a.clear();
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