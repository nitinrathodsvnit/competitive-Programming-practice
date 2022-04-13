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
    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    int n0 = 0, n1 = 0;
    int long0 = 0, cr0 = 0, ind0 = 0, ci = 0;
    int long1 = 0, cr1 = 0, ind1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            n0++;
            cr0++;
            cr1--;
        }
        else
        {
            n1++;
            cr0--;
            cr1++;
        }
        if (cr0 > long0)
        {
            ind0 = ci;
            long0 = cr0;
        }
        if (cr1 > long1)
        {
            ind1 = ci;
            long1 = cr1;
        }
        if (cr0 < 0)
        {
            cr0 = 0;
        }
        if (cr1 < 0)
        {
            cr1 = 0;
        }
        ci++;
    }
    // cout<<long1<<" "<<long0<<" "<<ind1<<" "<<ind0<<" "<<n0<<" "<<n1<<" ";
    if (n0 == n1)
    {
        cout << "YES\n";
        cout << 1 << " " << n << "\n";
        return;
    }
    if (n0 > n1)
    {
        if (n0 - n1 > long0)
        {
            cout << "NO\n";
            return;
        }
        int ed = (n0 - n1) / 2, i;
        for (i = ind0 - long0 + 1; ed; i++)
        {
            // cout<<i<<" "<<ed<<" ";
            if (s[i] == '0')
            {
                ed--;
            }
            else
            {
                ed++;
            }
        }
        cout << "YES\n";
        cout << ind0 - long0 + 2 << " " << i << "\n";
    }
    else
    {
        if (n1 - n0 > long1)
        {
            cout << "NO\n";
            return;
        }
        int ed = (n1 - n0) / 2, i;
        for (i = ind1 - long1 + 1; ed; i++)
        {
            // cout<<i<<" "<<ed<<" ";
            if (s[i] == '1')
            {
                ed--;
            }
            else
            {
                ed++;
            }
        }
        cout << "YES\n";
        cout << ind1 - long1 + 2 << " " << i << "\n";
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