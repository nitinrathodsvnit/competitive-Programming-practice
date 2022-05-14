

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e6 + 1;
const ll inf = 1e9;
const ll INF = 1e18;
int a[N];
bool b[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        int last;
        int n, q;
        cin >> n >> q;
        vector<int> v;
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = 0;
            sum += a[i];
        }
        last = 0;
        while (q--)
        {
            int tp, p, x;
            cin >> tp;
            if (tp == 1)
            {
                cin >> p >> x;
                if (b[p])
                {
                    sum -= a[p];
                    sum += x;
                    a[p] = x;
                }
                else
                {
                    b[p] = 1;
                    if (last == 0)
                        sum -= a[p];
                    else
                        sum -= last;
                    sum += x;
                    a[p] = x;
                    v.push_back(p);
                }
            }
            else
            {
                cin >> x;
                for (int i = 0; i < v.size(); i++)
                {
                    b[v[i]] = 0;
                }
                v.clear();
                last = x;
                sum = (ll)x * n;
            }
            cout << sum << endl;
        }
    }
}

// #include<bits/stdc++.h>

// #define int            long long int
// using namespace std;

// const int N = 200005;

// void solve(){
//     int n, q, ans=0;
//     cin>>n>>q;
//     bool ck=false;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         ans+=a[i];
//     }
//     for(int i=0; i<q; i++){
//         int type;
//         cin>>type;
//         if(type==1){
//             int idx, val;
//             cin>>idx>>val;
//             ans = ans - a[idx-1] + val;
//             a[idx-1] = val;
//         }
//         else{
//             int val;
//             cin>>val;
//             ans = val*n;
//             ck = true;
//         }
//         cout<<ans<<endl;
//     }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t=1;
//     cin>>t;
//     while (t--) solve();
//     return 0;
// }