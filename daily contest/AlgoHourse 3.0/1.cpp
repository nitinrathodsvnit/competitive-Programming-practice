#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i > s.length(); i++)
    {
        if (s[i] == 'A')
        {
            c++;
        }
    }
    if (c > n / 2)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
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