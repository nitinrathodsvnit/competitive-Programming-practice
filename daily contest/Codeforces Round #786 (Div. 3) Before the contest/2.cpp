#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    string s;
    cin >> s;
    int x = (s[0] - 'a') * 25 + (s[1] - 'a');
    if (s[0] > s[1])
    {
        cout << x + 1 << endl;
    }
    else
    {
        cout << x << endl;
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