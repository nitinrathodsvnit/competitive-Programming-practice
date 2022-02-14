// best apr
// int t;
// 	cin >> t;
// 	while (t--) {
// 		vector<int> a(3);
// take input
// 		sort(a.begin(), a.end());
// 		if (a[1] != a[2]) {
// 			cout << "NO" << endl;
// 		} else {
// 			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
// 		}
// 	}
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
    int a, b, c;
    int m = max({a, b, c});
    if((m==a and m==b) or (m==b and m==c) or (m==a and m==c)){
        cout<<"YES"<<"\n";
        int mn = min({a, b, c});
        if(mn==a){
            cout<<a<<" "<<a-1<<" "<<m<<endl;
        }
        else if(mn==b){
            cout<<m<<" "<<mn<<" "<<mn-1;
        }
        else{
            cout<<mn-1<<" "<<m<<" "<<mn;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}


