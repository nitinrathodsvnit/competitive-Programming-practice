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

const int N = 998244353;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n]={0}, c=1, ans=0;
    if(s[0]=='1'){
        a[0]=1;
    }
    int arr=a[0];
    for(int i=1; i<n; i++){
        if(s[i]=='1'){
            arr+=(i+1);
        }
        a[i]=arr;
        a[i]=a[i]%2;
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]==1){
            ans+=c;
            ans=ans%N;
        }
        c=c*2;
        c=c%N;
    }
    cout<<ans%N<<"\n";
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}