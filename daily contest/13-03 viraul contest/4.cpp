#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'W')
            continue;
        else
        {
            char cur = s[i];
            int pos = i;

            while (i < n && s[i] == cur)
                i++;

            bool ok1 = 1, ok2 = 1;

            if (!pos || s[pos - 1] == 'W')
                ok1 = 0;
            if (i == n || s[i] == 'W')
                ok2 = 0;

            if (!ok1 && !ok2)
            {
                cout << "NO\n";

                return;
            }
        }
    }

    cout << "YES\n";
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