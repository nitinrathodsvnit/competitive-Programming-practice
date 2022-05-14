#include <bits/stdc++.h>

#define ll long long int
using namespace std;

const int N = 200005;

void solve()
{
    ll n;
    cin >> n;
    if (n % 4 != 0 && n % 4 != 2)
    {
        cout << "-1" << endl;
    }
    else if (n < 4)
        cout << "-1" << endl;
    else
    {
        ll min = n / 6;
        ll max = n / 4;

        if (n % 6 != 0)
        {
            cout << (min + 1) << " " << max << endl;
        }
        else
        {
            cout << min << " " << max << endl;
        }
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