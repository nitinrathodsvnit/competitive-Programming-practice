#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n;
    cin>>n;
    int x = n/3
    if(n%3==0){
        cout<<n/3<<" "<<n/3 +1<<" "<< n/3 -1<<"\n";
    }
    else if(n%3==1){
        cout<<n/3<<" "<<n/3 +2<<" "<< n/3 -1<<"\n";
    }
    else{
        cout<<n/3 +1<<" "<<n/3 +2<<" "<< n/3 -1<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}