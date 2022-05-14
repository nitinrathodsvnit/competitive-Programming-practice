#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int num, k;
    cin >> num;
    int ans = 0;
    string s = to_string(num);
    for (int i = 0; i < s.length() - k; i++)
    {
        int tm = stoi(s.substr(i, i + k));
        if (num % tm == 0)
        {
            ans++;
        }
    }
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    o while (t--) solve();
    return 0;
}