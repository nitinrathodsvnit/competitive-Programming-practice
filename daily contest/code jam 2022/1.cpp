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

bool Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?false:true;
}


void solve(){
    static int c=1;
    cout<<"Case #"<<c<<":"<<"\n";
    int a, b;
    cin>>a>>b;
    a = 2*a+1;
    b = 2*b+1;
    int ta=a, tb=b;
    for(int i=0; i<ta; i++){
        for(int j=0; j<tb; j++){
            if((i==0 and j==0) or (i==0 and j==1) or (j==1 and i==1)or (i==1 and j==0)){
                cout<<".";
            }
            else{
                if(i&1==0){
                    if( j&1==0){
                        cout<<"+";
                    }
                    else{
                        cout<<"-";
                    }
                }
                else{
                    if(i&1){
                        cout<<".";
                    }
                    else{
                        cout<<"|";
                    }
                }
            }
        }
        cout<<"\n";
    }
        c++;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}