#include<bits/stdc++.h>

#define int            long long int
#define REP(i, a, b)   for(int i=a; i<=b; i++)
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define all(p)         p.begin(), p.end()
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define print(a)       for(auto x : a) cout << x << ' '; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << ' '  << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl

using namespace std;

const int N = 200005;

void solve(){
    int n, ans=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
		if(a[i]<0){
			a[i] = abs(a[i]);
		}
        if(i%2==0)
            ans+=a[i];
        else
            ans-=a[i];
        cout<<a[i]<<" "<<ans<<" ";
    }
    int mx=INT_MIN, mn=INT_MAX;
    for(int i=0; i<n; i+=2){
        if(mn>a[i]){
            mn= a[i];
        }
    }
    for(int i=1; i<n; i+=2){
        if(mx<a[i]){
            mx= a[i];
        }
    }
    cout<<(ans+mx-mn)<<"\n";
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}