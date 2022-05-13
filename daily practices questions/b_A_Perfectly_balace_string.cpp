#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char> in(26);
    for (int i = 0; i < n; ++i)
        in[s[i] - 'a'] = true;
    for (int c1 = 0; c1 < 26; ++c1)
    {
        for (int c2 = 0; c2 < 26; ++c2)
        {
            if (c1 == c2 or !in[c1] or !in[c2])
                continue;
            int cnt1 = 0, cnt2 = 0;
            int maxdif = 0;
            for (int i = 0; i < n; ++i)
            {
                if (s[i] - 'a' == c1)
                    ++cnt1;
                if (s[i] - 'a' == c2)
                    ++cnt2;
                if (cnt2 - cnt1 + maxdif > 1)
                {
                    cout << "NO";
                    return;
                }
                maxdif = max(maxdif, cnt1 - cnt2);
            }
        }
    }
    cout << "YES";
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