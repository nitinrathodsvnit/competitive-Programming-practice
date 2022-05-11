#include <bits/stdc++.h>

#define int long long int

using namespace std;

const int N = 200005;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int zero = 0, one = 0, q = 0, ans = 0;
    int i = 0;
    while (n--)
    {
        if (s[i] == '?')
        {
            ans++;
        }
        else if (s[i] == '0')
        {
            ans++;
            cout << ans << "\n";
            return;
        }
        if (s[i] == '1')
        {
            one = 1;
            q = 0;
            zero = 0;
            ans = 1;
        }
        i++;
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