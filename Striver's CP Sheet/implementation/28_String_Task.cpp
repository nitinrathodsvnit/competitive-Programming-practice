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
    string s,ans="";
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A' or s[i]=='O' or s[i]=='Y' or s[i]=='E' or s[i]=='U' or s[i]=='I' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y'){
            // s.erase(i, 1);
        }
        else{
            // cout<<"aave to che"<<endl;
            ans+='.';
            if(s[i]<91){
                s[i]+=32;
            }
            ans+=s[i];
        }
    }
    // ans="neald";
    cout<<ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}