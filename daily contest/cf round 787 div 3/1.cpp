#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int ta = max(0, x - a), tb = max(0, y - b);
        if ((ta + tb) > c)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << "\n";
    }
}