#include <bits/stdc++.h>

#define int long long int

using namespace std;

const int N = 200005;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, greater<int>());
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (k > sum)
        {
            cout << -1 << "\n";
        }
        else if (k == sum)
        {
            cout << n << "\n";
        }
        else
        {
            auto ans = lower_bound(a, a + n, k);
            cout << ans - a + 1 << "\n";
        }
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