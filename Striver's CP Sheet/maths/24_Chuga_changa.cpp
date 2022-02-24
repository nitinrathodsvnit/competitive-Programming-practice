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
    int a, b, x;
    cin>>a>>b>>x;
    cout<<(a+b)/x<<" ";
    if((a%x==0 and b%x==0) or ((a%x + b%x)<x)){
        cout<<0;
    }
    else{
        cout<<min({a%x, x - a%x, b%x, x - b%x});
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
// cin>>t;
    while (t--) solve();
    return 0;
}