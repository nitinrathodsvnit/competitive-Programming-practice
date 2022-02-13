#include<bits/stdc++.h>

#define int            long long int
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
    string t1, t2;
    cin>>t1>>t2;
    int h1 = stoi(t1.substr(0, 2));
    int h2 = stoi(t2.substr(0, 2));
    int m1 = stoi(t1.substr(3, 5));
    int m2 = stoi(t2.substr(3, 5));
    // cout<<h1<<" "<<m1<<" "<<h2<<" "<<m2;
    int ans = ((h1+h2)*60 + m1+m2)/2;
    m1 = ans%60;
    h1 = ans/60;
    cout<<h1<<":"<<m1;

}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}