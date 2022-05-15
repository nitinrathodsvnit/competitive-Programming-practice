#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    int ans = (w + y * z);
    if (ans == x)
    {
        cout << "filled\n";
    }
    else if (ans > x)
    {
        cout << "overFlow\n";
    }
    else
    {
        cout << "Unfilled\n";
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