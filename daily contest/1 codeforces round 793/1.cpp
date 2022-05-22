#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = n / 2; i >= 0 and s[i] == s[n / 2]; i--)
    {
        ans++;
    }
    if (ans > 1)
        cout << (ans - 1) * 2 + n % 2 << "\n";
    else
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