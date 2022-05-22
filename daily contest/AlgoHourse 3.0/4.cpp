#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1)
            str += '1';
        else
            str += '0';
        num >>= 1;
    }
    return str;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << DecimalToBinary(b) << "\n";
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