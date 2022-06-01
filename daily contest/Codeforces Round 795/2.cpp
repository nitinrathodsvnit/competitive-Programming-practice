#include <bits/stdc++.h>

#define int long long int
using namespace std;

const int N = 200005;

void solve()
{
    int n;
    cin>>n;
    int a[n], arr[n]={0};
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]>n){
            cout<<-1<<"\n";
            return;
        }
        else{
            int idx = a[i]-1;
            while(arr[idx]!=0 and idx<n){
                idx++;
            }
            if(idx>=n){
                cout<<-1<<"\n";
                return;
            }
            arr[idx] = idx;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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