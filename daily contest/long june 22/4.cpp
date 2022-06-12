#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int tm = 1, tm2 = n;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        a[i] = tm2;
        if (i > 0)
            a[i - 1] = tm;
        tm++;
        tm2--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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