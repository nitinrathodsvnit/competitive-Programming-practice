#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        mn &= a[i];
    }
    int tm = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            tm++;
        }
    }
    tm = n - tm;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            continue;
        }
        if (i == (n - 1))
        {
            ans++;
            continue;
        }
        a[i + 1] &= a[i];
        ans++;
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