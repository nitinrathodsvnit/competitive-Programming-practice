#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n, ans = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++)
    {
        if ((f[b[i] - 'a'] != 0) or a[i] == b[i])
        {
            continue;
        }
        f[b[i] - 'a']++;
        ans++;
    }
    cout << ans << endl;
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