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
    int a[4];
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    sort(a, a+4);
    int a1, a2, b1, b2, a3, b3, a4, b4;
    a1 = (a[2]+a[0])/2;
    b1 = a[2] - a1;
    a2 = (a[1]+a[2])/2;
    b2 = a[2] - a2;
    a3 = (a[3]+a[0])/2;
    b3 = a[3] - a3;
    a4 = (a[1] + a[3])/2;
    b4 = a[3] - a4;

    if((a1%1==0) and (a1!=0) and (b1%1==0) and (b1!=0)){
        if((a1/b1 == a[1]) and (a1*b1==a[3]) and (a1>=1) and (b1>=1) and (a1<=10000) and (b1<=10000)){
            cout<<a1<<" "<<b1<<"\n";
            return;
        }
    }
    if((a2%1==0) and (a2!=0) and (b2%1==0) and (b2!=0)){
        if((a2/b2 == a[0]) and (a2*b2==a[3]) and (a2>=1) and (b2>=1) and (a2<=10000) and (b2<=10000)){
            cout<<a2<<" "<<b2<<"\n";
            return;
        }
    }
    if((a3%1==0) and (a3!=0) and (b3%1==0) and (b3!=0)){
        if((a3/b3 == a[1]) and (a3*b3==a[2]) and (a3>=1) and (b3>=1) and (a3<=10000) and (b3<=10000)){
            cout<<a3<<" "<<b3<<"\n";
            return;
        }
    }
    if((a4%1==0) and (a4!=0) and (b4%1==0) and (b4!=0)){
        if((a4/b4 == a[0]) and (a4*b4==a[2]) and (a4>=1) and (b4>=1) and (a4<=10000) and (b4<=10000)){
            cout<<a4<<" "<<b4<<"\n";
            return;
        }
    }
    
    cout<<"-1 -1\n";
    return;
    

}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}