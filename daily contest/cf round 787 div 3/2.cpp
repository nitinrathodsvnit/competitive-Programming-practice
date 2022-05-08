#include <bits/stdc++.h>
using namespace std;

void sovle()
{
    int n, ans = 0;
    cin >> n;
    bool ha = false;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < i)
        {
            ha = true;
        }
    }
    if (ha)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1])
        {
            a[i] /= 2;
            ans++;
        }
        if (i != 0 and a[i] == 0)
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        sovle();
    }
    return 0;
}