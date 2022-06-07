#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n < 3)
    {
        cout << "YES\n";
        return;
    }
    if (n & 1)
    {
        if (min(a[1], a[2]) < a[0])
        {
            cout << "NO\n";
            return;
        }
    }
    int tm = n / 2;
    for (int i = 1 & n; i < tm; i += 2)
    {
        int mx = max(a[i], a[i + 1]);
        int mn = min(a[i + 2], a[i + 3]);
        if (mn < mx)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
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