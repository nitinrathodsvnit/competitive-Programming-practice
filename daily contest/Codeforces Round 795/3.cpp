#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int ans=0;
    for (int i =1;i<n;i++){
        if(s[i]<s[i-1] && k>0){
        swap(s[i-1],s[i]);
        k-=1;   }
        if (k==0)break;
    }
    
    for (int i =1;i<n;i++){
        string sum="";
        sum+=s[i-1];
        sum+=s[i];
        ans+=stoi(sum);    
        }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}