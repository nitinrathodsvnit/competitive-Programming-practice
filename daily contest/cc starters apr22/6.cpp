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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nz = 0, no = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            nz++;
        }
        else if (s[i] == '1')
        {
            no++;
        }
    }
    if (nz == no)
    {
        cout << "YES\n";
        cout << 1 << " " << n << "\n";
    }
    else if (nz > no)
    {
        int cr = 0, mx = 0, idx = 0, ci = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cr--;
            }
            else
            {
                cr++;
            }
            if (cr < 0)
            {
                cr = 1;
            }
            if (mx < cr)
            {
                idx = ci;
                mx = cr;
            }
            ci++;
        }
        if (nz - no > mx)
        {
            cout << "NO\n";
            return;
        }
        int totle = nz - no, i;
        for (i = cr - 1; totle; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                totle++;
            }
            else
            {
                s[i] = '0';
                totle--;
            }
        }
        cout << cr << " " << i + 1 << "\n";
    }
    else
    {
        int cr = 0, mx = 0, idx = 0, ci = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cr--;
            }
            else
            {
                cr++;
            }
            if (cr < 0)
            {
                cr = 1;
            }
            if (mx < cr)
            {
                idx = ci;
                mx = cr;
            }
            ci++;
        }
        if (no - nz > mx)
        {
            cout << "NO\n";
            return;
        }
        int totle = no - nz, i;
        for (i = cr - 1; totle; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                totle--;
            }
            else
            {
                s[i] = '0';
                totle++;
            }
        }
        cout << cr << " " << i + 1 << "\n";
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