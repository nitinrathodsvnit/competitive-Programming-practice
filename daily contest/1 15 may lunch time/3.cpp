#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int m1 = 0, m2 = 0, m3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > m1)
        {
            m2 = m1;
            m3 = m1;
            m1 = a[i];
        }
        else if (a[i] > m2)
        {
            m2 = a[i];
            if (m1 != m2)
            {
                m3 = a[i];
            }
        }
    }
    // cout<<m1<<" "<<m2<<" "<<m3<<endl;
    int ans = max(m1 + m2 + (m1 == m2) ? 0 : (m + (m2 - m1) % m), m1 + m3 + (m + (m3 - m1) % m));
    ans = max(m1 + m1, ans);
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