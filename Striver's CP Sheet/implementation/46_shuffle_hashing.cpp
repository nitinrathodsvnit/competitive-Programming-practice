#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

string p, h;

bool read(){
	if (!(cin >> p >> h))
		return false;
	return true;
}

void solve(){
	int n = h.size();
	vector<int> cntp(26);
	forn(i, p.size())
		++cntp[p[i] - 'a'];
	forn(i, n){
		vector<int> cnth(26);
		for (int j = i; j < n; ++j){
			++cnth[h[j] - 'a'];
			if (cntp == cnth){
				puts("YES");
				return;
			}
		}
	}
	puts("NO");
}

int main() {
	int tc;
	scanf("%d", &tc);
	forn(_, tc){
		read();
		solve();
	}
	return 0;
}















// #include<bits/stdc++.h>

// #define int            long long int
// #define F              first
// #define S              second
// #define pb             push_back
// #define si             set <int>
// #define vi             vector <int>
// #define pii            pair <int, int>
// #define vpi            vector <pii>
// #define vpp            vector <pair<int, pii>>
// #define mii            map <int, int>
// #define mpi            map <pii, int>
// #define spi            set <pii>
// #define all(p)         p.begin(), p.end()
// #define que_max        priority_queue <int>
// #define que_min        priority_queue <int, vi, greater<int>>
// #define print(a)       for(auto x : a) cout << x << ' '; cout << endl
// #define print1(a)      for(auto x : a) cout << x.F << ' '  << x.S << endl
// #define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl

// using namespace std;

// const int N = 200005;

// void solve(){
//     string s; cin>>s;
//     string a; cin>>a;
//     int f[26]={0};
//     for(int i=0; i<s.length(); i++){
//         f[s[i]-97]++;
//     }
//     int temp[26], sum=s.length();
//     copy(f, f+26, temp);
//     for(int i=0; i<a.length(); i++){
//         temp[a[i]-97]--;sum--;
//         if(temp[a[i]-97]<0){
//             sum=s.length();
//             copy(f, f+26, temp);
//         }
//         if(sum==0){
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//     cout<<"NO"<<endl;
//     return;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int t=1;
//     cin>>t;
//     while (t--) solve();
//     return 0;
// }