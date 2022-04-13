#include <bits/stdc++.h>

#define int long long int
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define all(p) p.begin(), p.end()
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define print(a)          \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << ' ' << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << ' ';    \
    cout << endl

using namespace std;

const int N = 200005;

void solve()
{
    int n, avg;
    cin >> n >> avg;
    int a[n - 1], sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int ans = n * avg - sum;
    if (ans < 0)
    {
        ans = 0;
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